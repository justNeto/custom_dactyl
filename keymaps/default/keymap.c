// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Base Layout
     * ┌───┬───┬───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │ F │ G │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │
     * ├───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │
     * └───┴───┼───┼───┼───┴───┴───┘
     *         │ C │ D │
     *         ├───┼───┤
     *         │ C │ D │
     *         ├───┼───┤
     *         │ C │ D │
     *         ├───┼───┤
     *         │ C │ D │
     *         └───┴───┘
     *
     */

    [0] = LAYOUT(
        KC_T,               KC_1,           KC_2,           KC_3,       KC_4,    KC_5,    KC_AUDIO_VOL_UP,
        KC_TILD,            KC_SCLN,        KC_COMMA,       KC_DOT,     KC_P,    KC_Y,    KC_AUDIO_VOL_DOWN,
        KC_A,               KC_A,           KC_O,           KC_E,       KC_U,    KC_I,    KC_AUDIO_MUTE,
        KC_T,               KC_QUOTE,       KC_Q,          KC_J,       KC_K,    KC_X,    KC_T,
                            KC_T,           KC_T,
                            MT(MOD_LGUI, KC_ESCAPE),    KC_LEFT_SHIFT,
                            KC_SPACE,                   KC_T,
                            MT(MOD_LCTL, KC_TAB),       KC_DELETE
    )
};
