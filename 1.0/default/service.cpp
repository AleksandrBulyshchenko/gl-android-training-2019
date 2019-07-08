/*
 * Copyright (C) 2019 GloballLogic
 *
 * com.gl.ledcontrol@1.0-service.hikey960 : service.cpp
 */

#define LOG_TAG "com.gl.ledcontrol@1.0-service.hikey960"

#include <hidl/HidlSupport.h>
#include <hidl/HidlTransportSupport.h>
#include <log/log.h>
#include "LedControl.h"

using ::android::hardware::configureRpcThreadpool;
using ::android::hardware::joinRpcThreadpool;
using ::android::OK;
using ::android::sp;
using ::com::gl::ledcontrol::V1_0::ILedControl;
using ::com::gl::ledcontrol::V1_0::LedControl;

int main(int /*argc*/, char* /*argv*/[]) {
    sp<ILedControl> ledcontrol = new LedControl();
    configureRpcThreadpool(1, true /* will join */);
    if (ledcontrol->registerAsService() != OK) {
        ALOGE("Could not register LedControl service.");
        return 1;
    }
    ALOGI("LedControl is registered.");
    joinRpcThreadpool();

    ALOGE("Service exited!");
    return 1;
}
