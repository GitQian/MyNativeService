#define LOG_TAG "MyOTAService"

#include "com/hsae/IOTA.h"
#include "com/hsae/BnOTA.h"
#include "com/hsae/BpOTA.h"
#include <log/log.h>
#include <binder/IInterface.h>
#include <binder/IBinder.h>
#include <binder/ProcessState.h>
#include <binder/IServiceManager.h>
#include <binder/BinderService.h>
#include "com/hsae/ICallback.h"
#include "com/hsae/BnCallback.h"
#include "com/hsae/BpCallback.h"
#include "OTAServer.h"

using namespace android;

android::String16 OTAService::getServiceName()
{
    return android::String16("MyOTAService");
}
android::binder::Status OTAService::update()
{
    ALOGI("OTA update called");
    return android::binder::Status();
}

::android::binder::Status OTAService::detect(bool *_aidl_return)
{
    ALOGI("OTA detect called");
    if (mCallback.get() != nullptr)
    {
        mCallback->onDetected(true);
    }
    
    *_aidl_return = true;
    return ::android::binder::Status();
}

::android::binder::Status OTAService::registerCallback(const ::android::sp<::com::hsae::ICallback> &callback)
{
    ALOGI("OTA registerCallback called");
    mCallback = callback;
    return ::android::binder::Status();
}
