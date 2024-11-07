#define LOG_TAG "MyOTAService"
#include "DiskManager.h"
#include <binder/IServiceManager.h>
#include <utils/Log.h>
#include <utils/String16.h>
#include <binder/IBinder.h>
#include <binder/Parcel.h>


using namespace std;
using namespace DiskFind;
using namespace android;

DiskManager::DiskManager()
{
}

DiskManager::~DiskManager()
{
}


DiskManager *DiskManager::instance = nullptr;

DiskManager &DiskManager::getInstance()
{
    if(instance == nullptr) {
        std::lock_guard<std::mutex> lock(mutex); // 加锁
        if(instance == nullptr) {
            instance = new DiskManager();
        }
    }
    return *instance;
}

void DiskManager::registerListener(DiskListener *listener)
{
    auto it = std::find(listeners.begin(), listeners.end(), listener); // 检查监听器是否已经存在
    if (it == listeners.end()){
        listeners.push_back(listener);
    }
}

void DiskFind::DiskManager::unregisterListener(DiskListener *listener)
{
    auto it = std::find(listeners.begin(), listeners.end(), listener); // 查找监听器
    if (it != listeners.end()){
        listeners.erase(it);
    }
}

void DiskFind::DiskManager::findUdisk()
{
    // for (DiskFind::DiskListener* listener : listeners)
    // {
    //     listener->onUdiskStateChanged(1, "U盘已插入"); // 通知所有监听器找到U盘
    // }
    this->communicateWithVold();

    //使用迭代器遍历listeners，迭代器可以理解为指针，指向listeners中的元素
    for (auto it = listeners.begin(); it != listeners.end(); ++it)
    {
        (*it)->onUdiskStateChanged(1, "U盘已插入"); // 通知所有监听器找到U盘
    }
}

void DiskFind::DiskManager::communicateWithVold()
{
    // 获取服务管理器
    sp<IServiceManager> serviceManager = defaultServiceManager();
    if (serviceManager == nullptr) {
        ALOGE("Failed to get IServiceManager");
        return;
    }

    // 获取 `vold` 服务的 Binder 接口
    sp<IBinder> voldBinder = serviceManager->getService(String16("vold"));
    if (voldBinder == nullptr) {
        ALOGE("Failed to get vold service");
        return;
    }

    // 创建用于发送命令的 Parcel
    Parcel data, reply;
    data.writeInterfaceToken(String16("android.os.IVold"));

    // 发送一个示例命令到 vold 服务 (命令代码和参数需要根据实际情况设置)
    data.writeString16(String16("fdeCheckPassword"));  // 示例参数，需根据实际需求修改

    // 调用 transact 方法，与 vold 服务进行通信 39
    status_t status = voldBinder->transact(IBinder::FIRST_CALL_TRANSACTION + 39, data, &reply);
    if (status != OK) {
        ALOGE("Failed to communicate with vold: %d", status);
        return;
    }

    // 读取返回结果
    int32_t result = reply.readInt32();
    ALOGI("Received result from vold: %d", result);
}
