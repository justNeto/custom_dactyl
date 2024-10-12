// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * Base Layout
     * ┌────┬───┬───┬───┬───┬───┬────┐
     * │   │ 1 │ 2 │ 3 │ 4 │ 5 │   │
     * ├────┼───┼───┼───┼───┼───┼────┤
     * │ ~~ │ ; │ , │ . │ P │ Y │   │
     * ├────┼───┼───┼───┼───┼───┼────┤
     * │ TG │ A │ O │ E │ U │ I │    │
     * ├────┼───┼───┼───┼───┼───┼────┤
     * │    │ ' │ Q │ J │ K │ X │ 󰐪  │
     * └────┴───┴───┼───┼───┼───┴────┘
     *              │   │   │
     *              └───┴───┘
     *
     *          ┌───────┬─────┐
    *           │   \   │  󰘶  │
     *          ├───────┼─────┤
     *          │ SPACE │ Alt │
     *          ├───────┼─────┤
     *          │   *   │ Del │
     *          └───────┴─────┘
     *
     *      \: Esc(tap)/Meta(held)
     *      *: Tab(tap)/Ctrl(held)
     *
     */

    [0] = LAYOUT(
            KC_T,           KC_1,               KC_2,           KC_3,       KC_4,       KC_5,       KC_PRINT_SCREEN,                        KC_T,           KC_6,           KC_7,           KC_8,       KC_9,           KC_0,       KC_T,
            KC_T,           KC_SCLN,            KC_COMMA,       KC_DOT,     KC_P,       KC_Y,       KC_AUDIO_VOL_UP,                        KC_T,          KC_F,            KC_G,           KC_C,       KC_R,           KC_L,       KC_T,
            KC_T,           KC_A,               KC_O,           KC_E,       KC_U,       KC_I,       KC_AUDIO_VOL_DOWN,                      KC_T,          KC_D,            KC_H,           KC_T,       KC_N,           KC_S,       KC_T,
            KC_LEFT_SHIFT,  KC_QUOTE,           KC_Q,           KC_J,       KC_K,       KC_X,       KC_AUDIO_MUTE,                          KC_T,          KC_B,            KC_M,           KC_W,       KC_V,           KC_Z,       KC_T,
                            KC_T,               KC_T,                                                                                                                                                   KC_T,           KC_T,

                            MT(MOD_LGUI, KC_ESCAPE),    KC_SPACE,                                                                                                                                       KC_BACKSPACE,   KC_ENTER,
                            KC_T,                       KC_LEFT_SHIFT,                                                                                                                                  KC_T,           KC_T,
                            MT(MOD_LCTL, KC_TAB),       KC_DELETE,                                                                                                                                      KC_T,           KC_CAPS_LOCK
    )

    /* [0] = LAYOUT( */
    /*     KC_T,          KC_1,           KC_2,           KC_3,       KC_4,    KC_5,      KC_PRINT_SCREEN,                     KC_T,          KC_6,            KC_7,           KC_8,       KC_9,    KC_0,      KC_T, */
    /*     KC_T,          KC_SCLN,        KC_COMMA,       KC_DOT,     KC_P,    KC_Y,      KC_AUDIO_VOL_UP,                     KC_T,          KC_F,            KC_G,           KC_C,       KC_R,    KC_L,      KC_T, */
    /*     TG(2),          KC_A,           KC_O,           KC_E,       KC_U,    KC_I,      KC_AUDIO_VOL_DOWN,                  KC_T,          KC_D,            KC_H,           KC_T,       KC_N,    KC_S,      KC_T, */
    /*     KC_LEFT_SHIFT,  KC_QUOTE,       KC_Q,           KC_J,       KC_K,    KC_X,      KC_AUDIO_MUTE,                      KC_T,          KC_B,            KC_M,           KC_W,       KC_V,    KC_Z,      KC_T */
    /*                     TG(3),          TG(4),                                                                              KC_T,          KC_NO, */
    /**/
    /*                     MT(MOD_LGUI, KC_ESCAPE),    LT(1, KC_SPACE),                                                                    KC_BACKSPACE,               KC_ENTER, */
    /*                     TG(1),                      KC_LEFT_SHIFT,                                                                      KC_T,                       KC_T, */
    /*                     MT(MOD_LCTL, KC_TAB),       KC_DELETE,                                                                          KC_T,       KC_CAPS_LOCK */
    /* ), */

    /*
     * Special chars (programming)
     * ┌────┬───┬───┬───┬───┬───┬────┐
     * │   │ 1 │ 2 │ 3 │ 4 │ 5 │    │
     * ├────┼───┼───┼───┼───┼───┼────┤
     * │    │ ~ │ ` │ & │ [ │ < │    │
     * ├────┼───┼───┼───┼───┼───┼────┤
     * │ 0  │ : │ ' │ ( │ { │ + │    │
     * ├────┼───┼───┼───┼───┼───┼────┤
     * │    │ . │ - │ # │ ^ │ @ │    │
     * └────┴───┴───┼───┼───┼───┴────┘
     *              │   │   │
     *              └───┴───┘
     *          ┌───┬───┐
     *          │   │   │
     *          ├───┼───┤
     *          │   │   │
     *          ├───┼───┤
     *          │   │   │
     *          └───┴───┘
     *      \: Esc(tap)/Meta(held)
     *      *: Tab(tap)/Ctrl(held)
     */

    /* [1] = LAYOUT( */
    /*     KC_NO,              KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, */
    /*     KC_NO,              KC_COMMA,           KC_GRAVE,       KC_AMPR,        KC_LBRC,        KC_LABK,        KC_TRANSPARENT, */
    /*     KC_0,               KC_COLN,            KC_QUOTE,       KC_LPRN,        KC_LCBR,        KC_PLUS,        KC_TRANSPARENT, */
    /*     KC_TRANSPARENT,     KC_DOT,             KC_MINUS,       KC_HASH,        KC_CIRC,        KC_AT,          KC_TRANSPARENT, */
    /*                         KC_TRANSPARENT,     KC_TRANSPARENT, */
    /**/
    /*                         KC_TRANSPARENT,     KC_TRANSPARENT, */
    /*                         KC_TRANSPARENT,     KC_TRANSPARENT, */
    /*                         KC_TRANSPARENT,     KC_TRANSPARENT */
    /* ), */

    /*
     * Number + F keys + arrows layer
     */
    /* [2] = LAYOUT(
        KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT,     KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,
        KC_TRANSPARENT,     KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,
        KC_TRANSPARENT,     KC_F11,         KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_DOT,         KC_TRANSPARENT,
                            KC_TRANSPARENT,     KC_TRANSPARENT,

                            KC_TRANSPARENT,     KC_TRANSPARENT,
                            KC_TRANSPARENT,     KC_TRANSPARENT,
                            KC_TRANSPARENT,     KC_TRANSPARENT
    ), */

    /*
     * League of Legends gaming layer
     */
    /* [3] = LAYOUT(
        KC_NO,              KC_1,               KC_2,           KC_3,           KC_4,           KC_5,           KC_P,
        KC_TAB,             KC_Q,               KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,
        KC_LEFT_GUI,        KC_A,               KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,
        KC_LEFT_SHIFT,      KC_Z,               KC_X,           KC_C,           KC_V,           KC_B,           KC_M,
                            KC_TRANSPARENT,     KC_TRANSPARENT,

                            KC_TRANSPARENT,     LT(3, KC_SPACE),
                            KC_TRANSPARENT,     KC_TRANSPARENT,
                            KC_TRANSPARENT,     KC_TRANSPARENT
    ), */

    /*
     *
     * General gaming layer
     *
     */
    /* [4] = LAYOUT(
        KC_NO,          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,
        KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,
        KC_ESCAPE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,
        KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_TRANSPARENT,
                                        KC_TRANSPARENT,     KC_TRANSPARENT,

                                        KC_TRANSPARENT,     KC_TRANSPARENT,
                                        KC_TRANSPARENT,     KC_TRANSPARENT,
                                        KC_TRANSPARENT,     KC_TRANSPARENT
    ) */
};
