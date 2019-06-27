
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE_TAGS := optional

LOCAL_SRC_FILES := $(call all-java-files-under, java)
LOCAL_SRC_FILES += $(call all-Iaidl-files-under, aidl)
LOCAL_RESOURCE_DIR := $(LOCAL_PATH)/res

LOCAL_PACKAGE_NAME := ServiceSkeleton

LOCAL_SDK_VERSION := 28

include $(BUILD_PACKAGE)

