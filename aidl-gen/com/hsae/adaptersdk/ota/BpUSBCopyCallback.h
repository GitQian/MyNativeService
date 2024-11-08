#ifndef AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BP_U_S_B_COPY_CALLBACK_H_
#define AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BP_U_S_B_COPY_CALLBACK_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <com/hsae/adaptersdk/ota/IUSBCopyCallback.h>

namespace com {

namespace hsae {

namespace adaptersdk {

namespace ota {

class BpUSBCopyCallback : public ::android::BpInterface<IUSBCopyCallback> {
public:
  explicit BpUSBCopyCallback(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpUSBCopyCallback() = default;
  ::android::binder::Status copy(int32_t code, float progress) override;
};  // class BpUSBCopyCallback

}  // namespace ota

}  // namespace adaptersdk

}  // namespace hsae

}  // namespace com

#endif  // AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BP_U_S_B_COPY_CALLBACK_H_
