#include <string>
#include "JavaOTAServiceProxy.h"
#include <binder/IServiceManager.h>
#include <binder/Parcel.h>
#include <utils/String16.h>
#include "aidl-gen/com/hsae/adaptersdk/ota/ICSCUpdateInterface.h"
#include <utils/Log.h>

using namespace std;
using namespace android;
using namespace com::hsae::adaptersdk::ota;

// 初始化静态成员
com::hsae::JavaOTAServiceProxy *com::hsae::JavaOTAServiceProxy::instance = nullptr;

com::hsae::JavaOTAServiceProxy *com::hsae::JavaOTAServiceProxy::getInstance()
{
    if (instance == nullptr)
    {
        instance = new JavaOTAServiceProxy();
    }
    return instance;
}

sp<IBinder> com::hsae::JavaOTAServiceProxy::getBinder()
{
    if (binder == nullptr)
    {
        sp<IServiceManager> sm = defaultServiceManager();
        binder = sm->getService(String16("com.hsae.otaservice.IBINDER_OTA_SERVICE"));
        if (binder == nullptr)
        {
            ALOGE("Failed to get IBinder for OTA Service.");
        }
    }
    return binder;
}

sp<ICSCUpdateInterface> com::hsae::JavaOTAServiceProxy::getService()
{
    proxy = ICSCUpdateInterface::asInterface(getBinder());
    if (proxy == nullptr)
    {
        ALOGE("Failed to get ICSCUpdateInterface.");
    }
    return proxy;
}

/**
 * @brief Send a check package request to the OTA service.
 * 通过binder调用ota服务中的checkPackageForOTA方法
 */
void com::hsae::JavaOTAServiceProxy::sendCheckPackage()
{
    android::Parcel data, reply;
    data.writeInterfaceToken(String16("com.hsae.adaptersdk.ota.ICSCUpdateInterface"));

    data.writeString16(String16("checkPackageForOTA"));
    //TODO 命名传入的是2，但是OTAService app服务收到的是18，需要确认
    data.writeInt64(2);

    sp<IBinder> binder = getBinder();
    if (binder != nullptr)
    {
        binder->transact(IBinder::FIRST_CALL_TRANSACTION + 11, data, &reply);
        status_t result = reply.readInt32();
        if (result == 0)
        {
            ALOGI("sendCheckPackage success");
        }
        else
        {
            ALOGI("sendCheckPackage fail");
        }
    }
    else
    {
        ALOGE("Failed to get valid IBinder.");
    }
}

/**
 * @brief Send a install package request to the OTA service.
 * 通过service proxy调用ota服务中的startInstallationForOTA方法
 */

void com::hsae::JavaOTAServiceProxy::sendInstallPackage()
{
    sp<ICSCUpdateInterface> proxy = getService();
    if (proxy != nullptr)
    {
        int32_t result;
        proxy->startInstallationForOTA(2, &result);
        if (result == 0)
        {
            ALOGI("Installation started successfully.");
        }
        else
        {
            ALOGE("Failed to start installation.");
        }
    }
    else
    {
        ALOGE("Failed to get valid service for startInstallationForOTA.");
    }
}
