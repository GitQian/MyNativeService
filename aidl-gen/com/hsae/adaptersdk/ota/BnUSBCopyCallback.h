#ifndef AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BN_U_S_B_COPY_CALLBACK_H_
#define AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BN_U_S_B_COPY_CALLBACK_H_

#include <binder/IInterface.h>
#include <com/hsae/adaptersdk/ota/IUSBCopyCallback.h>

namespace com {

namespace hsae {

namespace adaptersdk {

namespace ota {

class BnUSBCopyCallback : public ::android::BnInterface<IUSBCopyCallback> {
public:
  explicit BnUSBCopyCallback();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnUSBCopyCallback

}  // namespace ota

}  // namespace adaptersdk

}  // namespace hsae

}  // namespace com

#endif  // AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BN_U_S_B_COPY_CALLBACK_H_
