#pragma once
#include <binder/Binder.h>
#include "aidl-gen/com/hsae/adaptersdk/ota/ICSCUpdateInterface.h"

using namespace android;
using namespace com::hsae::adaptersdk::ota;

namespace com
{
    namespace hsae
    {

        class JavaOTAServiceProxy
        {
        private:
            sp<IBinder> ibinder;
            sp<ICSCUpdateInterface> mProxy;

        public:
            // JavaOTAServiceProxy(/* args */);
            // ~JavaOTAServiceProxy();

            sp<IBinder> getBinder();

            sp<ICSCUpdateInterface> getService();

            void sendCheckPackage();
            void sendInstallPackage();
        };
    }
}