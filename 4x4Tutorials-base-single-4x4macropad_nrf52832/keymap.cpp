/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include "keymap.h"

std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    {{
        {KC_ESC,    KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,    KC_Y,       KC_U,   KC_I,    KC_O,    KC_P,     KC_LCBR,},
        {KC_TAB,    KC_A,    KC_S,    KC_D,   KC_F,    KC_G,    KC_H,       KC_J,   KC_K,    KC_L,    KC_SCLN,  KC_ENTER,},
        {KC_LSFT,   KC_Z,    KC_X,    KC_C,   KC_V,    KC_B,    KC_N,       KC_M,   KC_COMMA,KC_DOT,  KC_SLASH, KC_QUOT,},
        {KC_LCTL,   KC_LGUI, KC_LALT, KC_SPC, KC_NO,   KC_NO,   KC_BSPACE,  KC_NO,  KC_LEFT, KC_UP,   KC_DOWN,  KC_RIGHT}
    }};


void setupKeymap() {
  uint32_t press[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
      KC_NO,     KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,    KC_Y,       KC_U,   KC_I,    KC_O,    KC_P,     KC_LBRC,
      KC_TAB,    KC_A,    KC_S,    KC_D,   KC_F,    KC_G,    KC_H,       KC_J,   KC_K,    KC_L,    KC_SCLN,  KC_ENTER,
      KC_LSFT,   KC_Z,    KC_X,    KC_C,   KC_V,    KC_B,    KC_N,       KC_M,   KC_COMMA,KC_DOT,  KC_SLASH, KC_QUOT,
      KC_LCTL,   KC_LGUI, KC_LALT, KC_NO, KC_NO,   KC_NO,    KC_NO,      KC_NO,  KC_LEFT, KC_UP,   KC_DOWN,  KC_RIGHT);

    uint32_t tap[MATRIX_ROWS][MATRIX_COLS] =
      KEYMAP(
        KC_ESC,   KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,       KC_NO,   KC_NO,    KC_NO,    KC_NO,     KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,       KC_NO,   KC_NO,    KC_NO,    KC_NO,     KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,       KC_NO,   KC_NO,    KC_NO,    KC_NO,     KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_SPC,  KC_NO,    KC_NO,    KC_BSPACE,   KC_NO,   KC_NO,    KC_NO,    KC_NO,     KC_NO);

    uint32_t hold[MATRIX_ROWS][MATRIX_COLS] =
      KEYMAP(
        KC_GRV,    KC_NO,    KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,       KC_NO,   KC_NO,    KC_NO,    KC_NO,     KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,       KC_NO,   KC_NO,    KC_NO,    KC_NO,     KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,       KC_NO,   KC_NO,    KC_NO,    KC_NO,     KC_NO,
        KC_NO,    KC_NO,    KC_NO,    LAYER_1,  KC_NO,    KC_NO,    LAYER_2,     KC_NO,   KC_NO,    KC_NO,    KC_NO,     KC_NO);

    uint32_t layer1[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
    KC_TILD,   KC_1,    KC_2,    KC_3,   KC_4,    KC_5,    KC_6,       KC_7,   KC_8,    KC_9,    KC_0,     KC_EQL,
    KC_EXLM,   KC_AT,   KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR,    KC_ASTR,KC_LPRN, KC_RPRN, KC_UNDS,  KC_PLUS,
    KC_LSFT,   KC_LBRACKET, KC_RBRACKET, KC_PIPE,KC_COLN, KC_DQT,  KC_LT,      KC_GT,  KC_QUES, KC_NUTL, KC_NUPI,  KC_ENTER,
    KC_LCTL,   KC_LGUI, KC_LALT, KC_SPC, KC_RGUI, LAYER_1, KC_DELETE,  LAYER_2,KC_LEFT, KC_UP,   KC_DOWN,  KC_RIGHT);

    uint32_t layer2[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP(
    KC_F12,    KC_F1,   KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7, KC_F8,   KC_F9,   KC_F10,   KC_F11,
    KC_TAB,    KC_A,    KC_S,    KC_D,   KC_F,    KC_G,    KC_H,    KC_J,  KC_K,    KC_L,    KC_SCLN,  KC_QUOT,
    KC_LSFT,   KC_Z,    KC_X,    KC_C,   KC_V,    KC_B,    KC_N,    KC_M,  KC_COMMA,KC_DOT,  KC_SLASH, SLEEP_NOW,
    KC_LCTL,   KC_LGUI, KC_LALT, KC_RGUI,LAYER_1, KC_SPC,  KC_SPC, LAYER_2,KC_LEFT, KC_UP,   KC_DOWN,  KC_RIGHT);

    /*
     * add the other layers
     */
    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
            matrix[row][col].addActivation(_L0, Method::PRESS, press[row][col]);
            matrix[row][col].addActivation(_L0, Method::MT_TAP, tap[row][col]);
            matrix[row][col].addActivation(_L0, Method::MT_HOLD, hold[row][col]);
            matrix[row][col].addActivation(_L1, Method::PRESS, layer1[row][col]);
            matrix[row][col].addActivation(_L2, Method::PRESS, layer2[row][col]);

        }
    }

}
