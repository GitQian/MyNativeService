#ifndef AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BP_U_S_B_UPDATE_CALLBACK_H_
#define AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BP_U_S_B_UPDATE_CALLBACK_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <com/hsae/adaptersdk/ota/IUSBUpdateCallback.h>

namespace com {

namespace hsae {

namespace adaptersdk {

namespace ota {

class BpUSBUpdateCallback : public ::android::BpInterface<IUSBUpdateCallback> {
public:
  explicit BpUSBUpdateCallback(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpUSBUpdateCallback() = default;
  ::android::binder::Status update(int32_t code, float progress) override;
};  // class BpUSBUpdateCallback

}  // namespace ota

}  // namespace adaptersdk

}  // namespace hsae

}  // namespace com

#endif  // AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BP_U_S_B_UPDATE_CALLBACK_H_
