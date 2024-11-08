#ifndef AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BN_C_S_C_UPDATE_INTERFACE_H_
#define AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BN_C_S_C_UPDATE_INTERFACE_H_

#include <binder/IInterface.h>
#include <com/hsae/adaptersdk/ota/ICSCUpdateInterface.h>

namespace com {

namespace hsae {

namespace adaptersdk {

namespace ota {

class BnCSCUpdateInterface : public ::android::BnInterface<ICSCUpdateInterface> {
public:
  explicit BnCSCUpdateInterface();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnCSCUpdateInterface

}  // namespace ota

}  // namespace adaptersdk

}  // namespace hsae

}  // namespace com

#endif  // AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BN_C_S_C_UPDATE_INTERFACE_H_
