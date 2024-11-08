#ifndef AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BP_C_S_C_UPDATE_INTERFACE_H_
#define AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BP_C_S_C_UPDATE_INTERFACE_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <com/hsae/adaptersdk/ota/ICSCUpdateInterface.h>

namespace com {

namespace hsae {

namespace adaptersdk {

namespace ota {

class BpCSCUpdateInterface : public ::android::BpInterface<ICSCUpdateInterface> {
public:
  explicit BpCSCUpdateInterface(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpCSCUpdateInterface() = default;
  ::android::binder::Status detectUSB(bool* _aidl_return) override;
  ::android::binder::Status registerUSBDetectCallback(const ::android::sp<::com::hsae::adaptersdk::ota::IUSBDetectCallback>& callback, bool* _aidl_return) override;
  ::android::binder::Status copyUSB(const ::android::sp<::com::hsae::adaptersdk::ota::IUSBCopyCallback>& callback) override;
  ::android::binder::Status registerUSBCopyCallback(const ::android::sp<::com::hsae::adaptersdk::ota::IUSBCopyCallback>& callback) override;
  ::android::binder::Status updateUSB() override;
  ::android::binder::Status registerUSBUpdateCallback(const ::android::sp<::com::hsae::adaptersdk::ota::IUSBUpdateCallback>& callback) override;
  ::android::binder::Status queryBinder(int32_t binderCode, ::android::sp<::android::IBinder>* _aidl_return) override;
  ::android::binder::Status detectUSBForFactory(bool* _aidl_return) override;
  ::android::binder::Status updateUSBForFactory() override;
  ::android::binder::Status registerUSBUpdateCallbackForFactory(const ::android::sp<::com::hsae::adaptersdk::ota::IUSBUpdateCallback>& callback) override;
  ::android::binder::Status checkPackageForDiag(int32_t type, const ::android::String16& path, int32_t* _aidl_return) override;
  ::android::binder::Status checkPackageForOTA(int32_t type, int32_t* _aidl_return) override;
  ::android::binder::Status startInstallationForDiag(int32_t type, const ::android::String16& path, int32_t* _aidl_return) override;
  ::android::binder::Status startInstallationForOTA(int32_t type, int32_t* _aidl_return) override;
  ::android::binder::Status rebootForDiag(int32_t type, int32_t* _aidl_return) override;
  ::android::binder::Status rebootForOTA(int32_t type, int32_t* _aidl_return) override;
  ::android::binder::Status getUpgradeProgressForDiag(int32_t type, int32_t* _aidl_return) override;
  ::android::binder::Status getUpgradeProgressForOTA(int32_t type, int32_t* _aidl_return) override;
  ::android::binder::Status writeFileForFactory(const ::android::String16& srcPath, bool* _aidl_return) override;
  ::android::binder::Status clearUpdateDir() override;
  ::android::binder::Status getUpdateServiceVersion(::android::String16* _aidl_return) override;
  ::android::binder::Status checkPackageForDwlService(int32_t type, int32_t* _aidl_return) override;
  ::android::binder::Status setApplicationEnable(const ::android::String16& pckname, int32_t state) override;
  ::android::binder::Status getApplicationEnableState(const ::android::String16& pckname, int32_t* _aidl_return) override;
  ::android::binder::Status isExistCSC2Cnf(bool* _aidl_return) override;
  ::android::binder::Status setUpdateCSC2(bool isUpdate) override;
};  // class BpCSCUpdateInterface

}  // namespace ota

}  // namespace adaptersdk

}  // namespace hsae

}  // namespace com

#endif  // AIDL_GENERATED_COM_HSAE_ADAPTERSDK_OTA_BP_C_S_C_UPDATE_INTERFACE_H_
