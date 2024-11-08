#ifndef AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_I_U_S_B_DETECT_CALLBACK_H_
#define AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_I_U_S_B_DETECT_CALLBACK_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <utils/StrongPointer.h>

namespace com {

namespace hsae {

namespace adaptersdk {

namespace ota {

class IUSBDetectCallback : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(USBDetectCallback)
  virtual ::android::binder::Status detect(bool detected) = 0;
};  // class IUSBDetectCallback

class IUSBDetectCallbackDefault : public IUSBDetectCallback {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status detect(bool) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class IUSBDetectCallbackDefault

}  // namespace ota

}  // namespace adaptersdk

}  // namespace hsae

}  // namespace com

#endif  // AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_I_U_S_B_DETECT_CALLBACK_H_
