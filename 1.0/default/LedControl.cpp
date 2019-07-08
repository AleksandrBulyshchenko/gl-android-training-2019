/*
 * Copyright (C) 2019 GloballLogic
 *
 * com.gl.ledcontrol@1.0-service.hikey960 : LedControl.cpp
 */

#define LOG_TAG "com.gl.ledcontrol@1.0::LedControl"

#include <log/log.h>
#include "LedControl.h"

namespace com {
namespace gl {
namespace ledcontrol {
namespace V1_0 {

LedControl::LedControl() {
    ALOGI("LedControl constructor");
}

Return<int32_t> LedControl::initLedControl() {
    ALOGI("initLedControl");
    return 0;
}

Return<int32_t> LedControl::terminateLedControl() {
    ALOGI("terminateLedControl");
    return 0;
}

Return<int32_t> LedControl::setLedState(Leds /*led*/, LedState /*state*/) {
    ALOGI("setLedState");
    return 0;
}

}  // namespace V1_0
}  // namespace ledcontrol
}  // namespace gl
}  // namespace com
