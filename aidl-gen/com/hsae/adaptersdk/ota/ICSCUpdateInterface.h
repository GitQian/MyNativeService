#ifndef AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_I_C_S_C_UPDATE_INTERFACE_H_
#define AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_I_C_S_C_UPDATE_INTERFACE_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <com/hsae/adaptersdk/ota/IUSBCopyCallback.h>
#include <com/hsae/adaptersdk/ota/IUSBDetectCallback.h>
#include <com/hsae/adaptersdk/ota/IUSBUpdateCallback.h>
#include <cstdint>
#include <utils/String16.h>
#include <utils/StrongPointer.h>

namespace com {

namespace hsae {

namespace adaptersdk {

namespace ota {

class ICSCUpdateInterface : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(CSCUpdateInterface)
  virtual ::android::binder::Status detectUSB(bool* _aidl_return) = 0;
  virtual ::android::binder::Status registerUSBDetectCallback(const ::android::sp<::com::hsae::adaptersdk::ota::IUSBDetectCallback>& callback, bool* _aidl_return) = 0;
  virtual ::android::binder::Status copyUSB(const ::android::sp<::com::hsae::adaptersdk::ota::IUSBCopyCallback>& callback) = 0;
  virtual ::android::binder::Status registerUSBCopyCallback(const ::android::sp<::com::hsae::adaptersdk::ota::IUSBCopyCallback>& callback) = 0;
  virtual ::android::binder::Status updateUSB() = 0;
  virtual ::android::binder::Status registerUSBUpdateCallback(const ::android::sp<::com::hsae::adaptersdk::ota::IUSBUpdateCallback>& callback) = 0;
  virtual ::android::binder::Status queryBinder(int32_t binderCode, ::android::sp<::android::IBinder>* _aidl_return) = 0;
  virtual ::android::binder::Status detectUSBForFactory(bool* _aidl_return) = 0;
  virtual ::android::binder::Status updateUSBForFactory() = 0;
  virtual ::android::binder::Status registerUSBUpdateCallbackForFactory(const ::android::sp<::com::hsae::adaptersdk::ota::IUSBUpdateCallback>& callback) = 0;
  virtual ::android::binder::Status checkPackageForDiag(int32_t type, const ::android::String16& path, int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status checkPackageForOTA(int32_t type, int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status startInstallationForDiag(int32_t type, const ::android::String16& path, int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status startInstallationForOTA(int32_t type, int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status rebootForDiag(int32_t type, int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status rebootForOTA(int32_t type, int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status getUpgradeProgressForDiag(int32_t type, int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status getUpgradeProgressForOTA(int32_t type, int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status writeFileForFactory(const ::android::String16& srcPath, bool* _aidl_return) = 0;
  virtual ::android::binder::Status clearUpdateDir() = 0;
  virtual ::android::binder::Status getUpdateServiceVersion(::android::String16* _aidl_return) = 0;
  virtual ::android::binder::Status checkPackageForDwlService(int32_t type, int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status setApplicationEnable(const ::android::String16& pckname, int32_t state) = 0;
  virtual ::android::binder::Status getApplicationEnableState(const ::android::String16& pckname, int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status isExistCSC2Cnf(bool* _aidl_return) = 0;
  virtual ::android::binder::Status setUpdateCSC2(bool isUpdate) = 0;
};  // class ICSCUpdateInterface

class ICSCUpdateInterfaceDefault : public ICSCUpdateInterface {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status detectUSB(bool*) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status registerUSBDetectCallback(const ::android::sp<::com::hsae::adaptersdk::ota::IUSBDetectCallback>&, bool*) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status copyUSB(const ::android::sp<::com::hsae::adaptersdk::ota::IUSBCopyCallback>&) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status registerUSBCopyCallback(const ::android::sp<::com::hsae::adaptersdk::ota::IUSBCopyCallback>&) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status updateUSB() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status registerUSBUpdateCallback(const ::android::sp<::com::hsae::adaptersdk::ota::IUSBUpdateCallback>&) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status queryBinder(int32_t, ::android::sp<::android::IBinder>*) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status detectUSBForFactory(bool*) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status updateUSBForFactory() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status registerUSBUpdateCallbackForFactory(const ::android::sp<::com::hsae::adaptersdk::ota::IUSBUpdateCallback>&) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status checkPackageForDiag(int32_t, const ::android::String16&, int32_t*) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status checkPackageForOTA(int32_t, int32_t*) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status startInstallationForDiag(int32_t, const ::android::String16&, int32_t*) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status startInstallationForOTA(int32_t, int32_t*) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status rebootForDiag(int32_t, int32_t*) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status rebootForOTA(int32_t, int32_t*) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getUpgradeProgressForDiag(int32_t, int32_t*) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getUpgradeProgressForOTA(int32_t, int32_t*) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status writeFileForFactory(const ::android::String16&, bool*) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status clearUpdateDir() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getUpdateServiceVersion(::android::String16*) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status checkPackageForDwlService(int32_t, int32_t*) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status setApplicationEnable(const ::android::String16&, int32_t) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getApplicationEnableState(const ::android::String16&, int32_t*) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status isExistCSC2Cnf(bool*) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status setUpdateCSC2(bool) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class ICSCUpdateInterfaceDefault

}  // namespace ota

}  // namespace adaptersdk

}  // namespace hsae

}  // namespace com

#endif  // AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_I_C_S_C_UPDATE_INTERFACE_H_
