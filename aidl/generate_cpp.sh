#for diag_sdk
#../../../../../out/soong/host/linux-x86/bin/aidl --lang cpp --out ../aidl-gen --header_out ../aidl-gen --include ./ com/hsae/diag/IDiagProp.aidl com/hsae/diag/IDiagListener.aidl com/hsae/diag/IDiag.aidl com/hsae/diag/IDiagId.aidl

#for upgrade
../../../../../out/soong/host/linux-x86/bin/aidl --lang cpp --out ../aidl-gen --header_out ../aidl-gen --include ../../../packages/apps/adapter_sdk/src ../../../packages/apps/adapter_sdk/src/com/hsae/adaptersdk/ota/ICSCUpdateInterface.aidl ../../../packages/apps/adapter_sdk/src/com/hsae/adaptersdk/ota/IUSBCopyCallback.aidl ../../../packages/apps/adapter_sdk/src/com/hsae/adaptersdk/ota/IUSBUpdateCallback.aidl ../../../packages/apps/adapter_sdk/src/com/hsae/adaptersdk/ota/IUSBDetectCallback.aidl
