#pragma once
#include <binder/Binder.h>
#include "aidl-gen/com/hsae/adaptersdk/ota/ICSCUpdateInterface.h"

namespace com
{
    namespace hsae
    {

        class JavaOTAServiceProxy
        {
        private:
            static JavaOTAServiceProxy *instance; // 单例实例
            android::sp<android::IBinder> binder;
            android::sp<com::hsae::adaptersdk::ota::ICSCUpdateInterface> proxy;

            // 私有构造函数，防止外部实例化
            JavaOTAServiceProxy() = default;

            // 禁止拷贝构造和赋值操作
            JavaOTAServiceProxy(const JavaOTAServiceProxy &) = delete;
            JavaOTAServiceProxy &operator=(const JavaOTAServiceProxy &) = delete;

        public:
            // 获取单例实例的静态方法
            static JavaOTAServiceProxy *getInstance();

            // 可选的析构函数
            ~JavaOTAServiceProxy() = default;

            android::sp<android::IBinder> getBinder();
            android::sp<com::hsae::adaptersdk::ota::ICSCUpdateInterface> getService();
            void sendCheckPackage();
            void sendInstallPackage();
        };

    } // namespace hsae
} // namespace com
