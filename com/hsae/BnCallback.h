#ifndef AIDL_GENERATED_COM_HSAE_BN_CALLBACK_H_
#define AIDL_GENERATED_COM_HSAE_BN_CALLBACK_H_

#include <binder/IInterface.h>
#include <com/hsae/ICallback.h>

namespace com {

namespace hsae {

class BnCallback : public ::android::BnInterface<ICallback> {
public:
  explicit BnCallback();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnCallback

}  // namespace hsae

}  // namespace com

#endif  // AIDL_GENERATED_COM_HSAE_BN_CALLBACK_H_
