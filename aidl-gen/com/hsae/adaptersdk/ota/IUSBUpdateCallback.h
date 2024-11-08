#ifndef AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_I_U_S_B_UPDATE_CALLBACK_H_
#define AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_I_U_S_B_UPDATE_CALLBACK_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <utils/StrongPointer.h>

namespace com {

namespace hsae {

namespace adaptersdk {

namespace ota {

class IUSBUpdateCallback : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(USBUpdateCallback)
  virtual ::android::binder::Status update(int32_t code, float progress) = 0;
};  // class IUSBUpdateCallback

class IUSBUpdateCallbackDefault : public IUSBUpdateCallback {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status update(int32_t, float) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class IUSBUpdateCallbackDefault

}  // namespace ota

}  // namespace adaptersdk

}  // namespace hsae

}  // namespace com

#endif  // AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_I_U_S_B_UPDATE_CALLBACK_H_
