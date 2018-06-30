/* Copyright 2017 Wunder
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "xd75.h"

// Layer shorthand
#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define _UNDER S(KC_RO)
#define _PIPE S(KC_JYEN)
#define _BkQUOT S(KC_LBRC)
#define _PLUS S(KC_SCLN)
#define _ASTER S(KC_QUOT)

#define ADJUST MO(_ADJUST)

#define FN_HENK LT(_FN, KC_HENK)
#define LOW_MHN LT(_LOWER, KC_MHEN)
#define RAI_HNK LT(_RAISE, KC_HENK)
#define ALT_APP ALT_T(KC_APP)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        | 1      | 2      | 3      | 4      | 5      |        |        |        | 6      | 7      | 8      | 9      | 0      |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | Tab    | Q      | W      | E      | R      | T      |        |        |        | Y      | U      | I      | O      | P      | BkSpc  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | Ctrl   | A      | S      | D      | F      | G      |        |        |        | H      | J      | K      | L      | ;+     | :*     |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | Shift  | Z      | X      | C      | V      | B      |        |        |        | N      | M      | ,<     | .>     | /?     | \|     |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | Adjust | Esc    | Alt/App| GUI    | Low/MH | Space  |        |        |        | Enter  | Rai/HN | Left   | Down   | Up     | Right  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_QWERTY] = {
  { XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    XXXXXXX, XXXXXXX, XXXXXXX, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX },
  { KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    XXXXXXX, XXXXXXX, XXXXXXX, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC },
  { KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    XXXXXXX, XXXXXXX, XXXXXXX, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT },
  { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX, XXXXXXX, XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_JYEN },
  { ADJUST,  KC_ESC,  ALT_APP, KC_LGUI, LOW_MHN, KC_SPC,  XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT,  RAI_HNK, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT },
 },

/* Lower
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        | F1     | F2     | F3     | F4     | F5     |        |        |        | F6     | F7     | F8     | F9     | F10    |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | ~      | !      | @      | #      | $      | %      |        |        |        | -      | '      | (      | )      | ^      |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | 1      | 2      | 3      | 4      | 5      |        |        |        | =      | "      | {      | }      | +      | *      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | 6      | 7      | 8      | 9      | 0      |        |        |        | _      | `      | [      | ]      | &      | |      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        | BkSpc  |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_LOWER] = {
  { _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______ },
  { KC_PLUS, KC_EXLM, KC_LBRC, KC_HASH, KC_DLR,  KC_PERC, _______, _______, _______, KC_MINS, KC_AMPR, KC_ASTR, KC_LPRN, KC_EQL,  _______ },
  { _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______, _______, _______, KC_UNDS, KC_AT,   KC_RCBR, KC_PIPE, _PLUS,   _ASTER },
  { _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, _______, _______, S(KC_RO),_BkQUOT, KC_RBRC, KC_BSLS, KC_CIRC, _PIPE   },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BSPC, _______, _______, _______, _______ },
 },

/* Raise
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * |        | F11    | F12    | F13    | F14    | F15    |        |        |        | F16    | F17    | F18    | F19    | F20    | Del    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | F1     | F2     | F3     | F4     | F5     |        |        |        | Left   | Down   | Up     | Right  | LClick | RClick |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | F6     | F7     | F8     | F9     | F10    |        |        |        | Home   | PgDn   | PgUp   | End    |        | PrSc   |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        | Del    |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_RAISE] = {
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
  { _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,  _______, _______, _______, KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_DEL  },
  { _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_BTN1, KC_BTN2 },
  { _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, KC_PSCR },
  { _______, _______, _______, _______, KC_DEL,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
 },

/* Adjust
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | RESET  |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_ADJUST] = {
  { RESET,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX },
  { _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX },
  { _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX },
  { _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
 }

};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only waorks in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
