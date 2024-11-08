#ifndef AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_I_U_S_B_COPY_CALLBACK_H_
#define AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_I_U_S_B_COPY_CALLBACK_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <utils/StrongPointer.h>

namespace com {

namespace hsae {

namespace adaptersdk {

namespace ota {

class IUSBCopyCallback : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(USBCopyCallback)
  virtual ::android::binder::Status copy(int32_t code, float progress) = 0;
};  // class IUSBCopyCallback

class IUSBCopyCallbackDefault : public IUSBCopyCallback {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status copy(int32_t, float) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class IUSBCopyCallbackDefault

}  // namespace ota

}  // namespace adaptersdk

}  // namespace hsae

}  // namespace com

#endif  // AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_I_U_S_B_COPY_CALLBACK_H_
