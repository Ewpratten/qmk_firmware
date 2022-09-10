#ifndef __QMK_EWP_COMBO_MACROS_H
#define __QMK_EWP_COMBO_MACROS_H

#include QMK_KEYBOARD_H

#define MAKE_COMBO_INPUTS(name, inputs...) const uint16_t PROGMEM combo_inputs_##name[] = {inputs, COMBO_END};

#endif
