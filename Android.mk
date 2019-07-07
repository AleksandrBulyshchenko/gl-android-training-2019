#
# Copyright (C) 2018 GloballLogic
# Android system general course
#
# ServiceSkeleton - application project to demonstrate AIDL usage.
#
LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_PACKAGE_NAME := ServiceSkeleton

LOCAL_SRC_FILES := \
    $(call all-java-files-under, java) \
    $(call all-Iaidl-files-under, aidl)

LOCAL_RESOURCE_DIR := $(LOCAL_PATH)/res

LOCAL_SDK_VERSION := current

LOCAL_USE_AAPT2 := true

LOCAL_STATIC_ANDROID_LIBRARIES := \
    androidx.appcompat_appcompat \
    androidx-constraintlayout_constraintlayout

LOCAL_VENDOR_MODULE := true

include $(BUILD_PACKAGE)
