#include <com/hsae/adaptersdk/ota/IUSBDetectCallback.h>
#include <com/hsae/adaptersdk/ota/BpUSBDetectCallback.h>

namespace com {

namespace hsae {

namespace adaptersdk {

namespace ota {

DO_NOT_DIRECTLY_USE_ME_IMPLEMENT_META_INTERFACE(USBDetectCallback, "com.hsae.adaptersdk.ota.IUSBDetectCallback")

}  // namespace ota

}  // namespace adaptersdk

}  // namespace hsae

}  // namespace com
#include <com/hsae/adaptersdk/ota/BpUSBDetectCallback.h>
#include <binder/Parcel.h>
#include <android-base/macros.h>

namespace com {

namespace hsae {

namespace adaptersdk {

namespace ota {

BpUSBDetectCallback::BpUSBDetectCallback(const ::android::sp<::android::IBinder>& _aidl_impl)
    : BpInterface<IUSBDetectCallback>(_aidl_impl){
}

::android::binder::Status BpUSBDetectCallback::detect(bool detected) {
  ::android::Parcel _aidl_data;
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeBool(detected);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 0 /* detect */, _aidl_data, &_aidl_reply, ::android::IBinder::FLAG_ONEWAY);
  if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IUSBDetectCallback::getDefaultImpl())) {
     return IUSBDetectCallback::getDefaultImpl()->detect(detected);
  }
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_error:
  _aidl_status.setFromStatusT(_aidl_ret_status);
  return _aidl_status;
}

}  // namespace ota

}  // namespace adaptersdk

}  // namespace hsae

}  // namespace com
#include <com/hsae/adaptersdk/ota/BnUSBDetectCallback.h>
#include <binder/Parcel.h>
#include <binder/Stability.h>

namespace com {

namespace hsae {

namespace adaptersdk {

namespace ota {

BnUSBDetectCallback::BnUSBDetectCallback()
{
  ::android::internal::Stability::markCompilationUnit(this);
}

::android::status_t BnUSBDetectCallback::onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) {
  ::android::status_t _aidl_ret_status = ::android::OK;
  switch (_aidl_code) {
  case ::android::IBinder::FIRST_CALL_TRANSACTION + 0 /* detect */:
  {
    bool in_detected;
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    _aidl_ret_status = _aidl_data.readBool(&in_detected);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    ::android::binder::Status _aidl_status(detect(in_detected));
  }
  break;
  default:
  {
    _aidl_ret_status = ::android::BBinder::onTransact(_aidl_code, _aidl_data, _aidl_reply, _aidl_flags);
  }
  break;
  }
  if (_aidl_ret_status == ::android::UNEXPECTED_NULL) {
    _aidl_ret_status = ::android::binder::Status::fromExceptionCode(::android::binder::Status::EX_NULL_POINTER).writeToParcel(_aidl_reply);
  }
  return _aidl_ret_status;
}

}  // namespace ota

}  // namespace adaptersdk

}  // namespace hsae

}  // namespace com