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

include $(BUILD_PACKAGE)
