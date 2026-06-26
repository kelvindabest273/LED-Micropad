// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names{
    _NCS
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │NUM│CAP│SCR│
     * └───┴───┴───┘
     */
    [_NCS] = LAYOUT_ortho_3x1(
        KC_NUM,   KC_CAPS,   KC_SCRL
    )


};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_NCS] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    };
#endif


bool rgb_matrix_indicators_user(void) { //written by chatgpt
    led_t state = host_keyboard_led_state();//written by chatgpt

    if (state.num_lock) {//written by chatgpt
        rgb_matrix_set_color(0, 255, 128, 128);//written by chatgpt
    }
    else {
        rgb_matrix_set_color(0, 0, 0, 0);
    }

    if (state.caps_lock) {//written by chatgpt
        rgb_matrix_set_color(1, 255, 128, 128);//written by chatgpt
    }
    else {
        rgb_matrix_set_color(1, 0, 0, 0);
    }

    if (state.scroll_lock) {//written by chatgpt
        rgb_matrix_set_color(2, 255, 128, 128);//written by chatgpt
    }
    else {
        rgb_matrix_set_color(2, 0, 0, 0);
    }
    return false;//written by chatgpt
}

//the following code is taken from https://docs.qmk.fm/features/oled_driver#oled-type
#ifdef OLED_ENABLE
bool oled_task_user(void) {

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    
    return false;
}
#endif