#ifndef AIDL_GENERATED_COM_HSAE_I_CALLBACK_H_
#define AIDL_GENERATED_COM_HSAE_I_CALLBACK_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <utils/StrongPointer.h>

namespace com {

namespace hsae {

class ICallback : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(Callback)
  virtual ::android::binder::Status onDetected(bool data) = 0;
};  // class ICallback

class ICallbackDefault : public ICallback {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status onDetected(bool) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class ICallbackDefault

}  // namespace hsae

}  // namespace com

#endif  // AIDL_GENERATED_COM_HSAE_I_CALLBACK_H_
