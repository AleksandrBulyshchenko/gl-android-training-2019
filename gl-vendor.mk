#
# Android system general training
# Copyright (C) 2019 GloballLogic
#
# Makefile for vendor componets developed in scope of the training
#

PRODUCT_PACKAGES += \
    ServiceSkeleton \

# HAL
PRODUCT_PACKAGES += \
    com.gl.ledcontrol@1.0-service.hikey960 \

DEVICE_MANIFEST_FILE += \
    vendor/gl/interfaces/manifest.xml \

TARGET_FS_CONFIG_GEN += \
    vendor/gl/interfaces/config.fs \
