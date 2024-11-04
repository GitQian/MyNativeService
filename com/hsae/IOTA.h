#ifndef AIDL_GENERATED_COM_HSAE_I_O_T_A_H_
#define AIDL_GENERATED_COM_HSAE_I_O_T_A_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <com/hsae/ICallback.h>
#include <utils/StrongPointer.h>

namespace com {

namespace hsae {

class IOTA : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(OTA)
  virtual ::android::binder::Status update() = 0;
  virtual ::android::binder::Status detect(bool* _aidl_return) = 0;
  virtual ::android::binder::Status registerCallback(const ::android::sp<::com::hsae::ICallback>& callback) = 0;
};  // class IOTA

class IOTADefault : public IOTA {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status update() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status detect(bool*) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status registerCallback(const ::android::sp<::com::hsae::ICallback>&) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class IOTADefault

}  // namespace hsae

}  // namespace com

#endif  // AIDL_GENERATED_COM_HSAE_I_O_T_A_H_
