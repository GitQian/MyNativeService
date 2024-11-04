#ifndef AIDL_GENERATED_COM_HSAE_BN_O_T_A_H_
#define AIDL_GENERATED_COM_HSAE_BN_O_T_A_H_

#include <binder/IInterface.h>
#include <com/hsae/IOTA.h>

namespace com {

namespace hsae {

class BnOTA : public ::android::BnInterface<IOTA> {
public:
  explicit BnOTA();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnOTA

}  // namespace hsae

}  // namespace com

#endif  // AIDL_GENERATED_COM_HSAE_BN_O_T_A_H_
