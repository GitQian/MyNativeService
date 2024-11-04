#ifndef AIDL_GENERATED_COM_HSAE_BP_CALLBACK_H_
#define AIDL_GENERATED_COM_HSAE_BP_CALLBACK_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <com/hsae/ICallback.h>

namespace com {

namespace hsae {

class BpCallback : public ::android::BpInterface<ICallback> {
public:
  explicit BpCallback(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpCallback() = default;
  ::android::binder::Status onDetected(bool data) override;
};  // class BpCallback

}  // namespace hsae

}  // namespace com

#endif  // AIDL_GENERATED_COM_HSAE_BP_CALLBACK_H_
