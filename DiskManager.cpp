#include "DiskManager.h"
using namespace std;
using namespace DiskFind;
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

    //使用迭代器遍历listeners，迭代器可以理解为指针，指向listeners中的元素
    for (auto it = listeners.begin(); it != listeners.end(); ++it)
    {
        (*it)->onUdiskStateChanged(1, "U盘已插入"); // 通知所有监听器找到U盘
    }
}
