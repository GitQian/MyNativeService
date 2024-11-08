#ifndef AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BP_U_S_B_DETECT_CALLBACK_H_
#define AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BP_U_S_B_DETECT_CALLBACK_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <com/hsae/adaptersdk/ota/IUSBDetectCallback.h>

namespace com {

namespace hsae {

namespace adaptersdk {

namespace ota {

class BpUSBDetectCallback : public ::android::BpInterface<IUSBDetectCallback> {
public:
  explicit BpUSBDetectCallback(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpUSBDetectCallback() = default;
  ::android::binder::Status detect(bool detected) override;
};  // class BpUSBDetectCallback

}  // namespace ota

}  // namespace adaptersdk

}  // namespace hsae

}  // namespace com

#endif  // AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BP_U_S_B_DETECT_CALLBACK_H_
