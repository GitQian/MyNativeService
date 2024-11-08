#include <com/hsae/adaptersdk/ota/IUSBCopyCallback.h>
#include <com/hsae/adaptersdk/ota/BpUSBCopyCallback.h>

namespace com {

namespace hsae {

namespace adaptersdk {

namespace ota {

DO_NOT_DIRECTLY_USE_ME_IMPLEMENT_META_INTERFACE(USBCopyCallback, "com.hsae.adaptersdk.ota.IUSBCopyCallback")

}  // namespace ota

}  // namespace adaptersdk

}  // namespace hsae

}  // namespace com
#include <com/hsae/adaptersdk/ota/BpUSBCopyCallback.h>
#include <binder/Parcel.h>
#include <android-base/macros.h>

namespace com {

namespace hsae {

namespace adaptersdk {

namespace ota {

BpUSBCopyCallback::BpUSBCopyCallback(const ::android::sp<::android::IBinder>& _aidl_impl)
    : BpInterface<IUSBCopyCallback>(_aidl_impl){
}

::android::binder::Status BpUSBCopyCallback::copy(int32_t code, float progress) {
  ::android::Parcel _aidl_data;
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeInt32(code);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeFloat(progress);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 0 /* copy */, _aidl_data, &_aidl_reply, ::android::IBinder::FLAG_ONEWAY);
  if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IUSBCopyCallback::getDefaultImpl())) {
     return IUSBCopyCallback::getDefaultImpl()->copy(code, progress);
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
#include <com/hsae/adaptersdk/ota/BnUSBCopyCallback.h>
#include <binder/Parcel.h>
#include <binder/Stability.h>

namespace com {

namespace hsae {

namespace adaptersdk {

namespace ota {

BnUSBCopyCallback::BnUSBCopyCallback()
{
  ::android::internal::Stability::markCompilationUnit(this);
}

::android::status_t BnUSBCopyCallback::onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) {
  ::android::status_t _aidl_ret_status = ::android::OK;
  switch (_aidl_code) {
  case ::android::IBinder::FIRST_CALL_TRANSACTION + 0 /* copy */:
  {
    int32_t in_code;
    float in_progress;
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    _aidl_ret_status = _aidl_data.readInt32(&in_code);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    _aidl_ret_status = _aidl_data.readFloat(&in_progress);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    ::android::binder::Status _aidl_status(copy(in_code, in_progress));
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
