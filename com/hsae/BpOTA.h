#ifndef AIDL_GENERATED_COM_HSAE_BP_O_T_A_H_
#define AIDL_GENERATED_COM_HSAE_BP_O_T_A_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <com/hsae/IOTA.h>

namespace com {

namespace hsae {

class BpOTA : public ::android::BpInterface<IOTA> {
public:
  explicit BpOTA(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpOTA() = default;
  ::android::binder::Status update() override;
  ::android::binder::Status detect(bool* _aidl_return) override;
  ::android::binder::Status registerCallback(const ::android::sp<::com::hsae::ICallback>& callback) override;
};  // class BpOTA

}  // namespace hsae

}  // namespace com

#endif  // AIDL_GENERATED_COM_HSAE_BP_O_T_A_H_
