#pragma once
#include "com/hsae/IOTA.h"
#include "com/hsae/BnOTA.h"
#include "com/hsae/BpOTA.h"
#include <log/log.h>
#include <binder/IInterface.h>
#include <binder/IBinder.h>
#include <binder/ProcessState.h>
#include <binder/IServiceManager.h>
#include <binder/BinderService.h>

using namespace android;

class OTAService : public android::BinderService<OTAService>, public com::hsae::BnOTA
{
private:
    /* data */
    sp<com::hsae::ICallback> mCallback;
public:
    // 注册服务的名称
    static android::String16 getServiceName();

    // 实现 AIDL 接口中定义的方法
    virtual android::binder::Status update() override;
    virtual ::android::binder::Status detect(bool* _aidl_return) override;
    virtual ::android::binder::Status registerCallback(const ::android::sp<::com::hsae::ICallback>& callback) override;
};
