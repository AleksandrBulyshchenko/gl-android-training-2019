/*
 * Copyright (C) 2019 GloballLogic
 *
 * com.gl.ledcontrol@1.0-service.hikey960 : LedControl.h
 */

#ifndef com_gl_ledcontrol_V1_0_LedControl_H_
#define com_gl_ledcontrol_V1_0_LedControl_H_

#include <com/gl/ledcontrol/1.0/ILedControl.h>

namespace com {
namespace gl {
namespace ledcontrol {
namespace V1_0 {

using android::hardware::Return;

class LedControl: public ILedControl {
public:
    LedControl();
    Return<int32_t> initLedControl() override;
    Return<int32_t> terminateLedControl() override;
    Return<int32_t> setLedState(Leds led, LedState state) override;
};

}  // namespace V1_0
}  // namespace ledcontrol
}  // namespace gl
}  // namespace com

#endif //com_gl_ledcontrol_V1_0_LedControl_H_
