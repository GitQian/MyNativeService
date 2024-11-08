#ifndef AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BN_U_S_B_UPDATE_CALLBACK_H_
#define AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BN_U_S_B_UPDATE_CALLBACK_H_

#include <binder/IInterface.h>
#include <com/hsae/adaptersdk/ota/IUSBUpdateCallback.h>

namespace com {

namespace hsae {

namespace adaptersdk {

namespace ota {

class BnUSBUpdateCallback : public ::android::BnInterface<IUSBUpdateCallback> {
public:
  explicit BnUSBUpdateCallback();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnUSBUpdateCallback

}  // namespace ota

}  // namespace adaptersdk

}  // namespace hsae

}  // namespace com

#endif  // AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BN_U_S_B_UPDATE_CALLBACK_H_
