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

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define LOW_MHN LT(_LOWER, KC_MHEN)
#define RAI_HNK LT(_RAISE, KC_HENK)
#define ALT_APP ALT_T(KC_APP)

#define JISPIPE S(KC_JYEN)
#define JISPLUS S(KC_SCLN)
#define JISMULT S(KC_QUOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | Tab    | Q      | W      | E      | R      | T      |        |        |        | Y      | U      | I      | O      | P      | @`     |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | Ctrl   | A      | S      | D      | F      | G      |        |        |        | H      | J      | K      | L      | ;+     | :*     |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | Shift  | Z      | X      | C      | V      | B      |        |        |        | N      | M      | ,<     | .>     | /?     | \_     |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | GUI    | Esc    | Del    | Alt/App| Low/MH | Space  |        |        |        | Enter  | Rai/H  | Left   | Down   | Up     | Right  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_QWERTY] = {
  { XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX },
  { KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    XXXXXXX, XXXXXXX, XXXXXXX, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC },
  { KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    XXXXXXX, XXXXXXX, XXXXXXX, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT },
  { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX, XXXXXXX, XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RO   },
  { KC_LGUI, KC_ESC,  KC_DEL,  ALT_APP, LOW_MHN, KC_SPC,  XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT,  RAI_HNK, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT },
 },

/* Lower
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        |        | Reset  |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * |        | !      | "      | #      | $      | %      |        |        |        | &      | '      | (      | )      |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | F1     | F2     | F3     | F4     | F5     |        |        |        | F11    | =      | {      | }      | ~      | |      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | F6     | F7     | F8     | F9     | F10    |        |        |        | F12    | -      | [      | ]      | ^      | \      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        | Del    |        | Home   | PgDn   | PgUp   | End    |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_LOWER] = {
  { _______, _______, _______, _______, _______, _______, _______, RESET,   _______, _______, _______, _______, _______, _______, _______ },
  { _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______, _______, _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, _______, _______ },
  { _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, _______, KC_F11,  KC_UNDS, KC_RCBR, KC_PIPE, KC_PLUS, JISPIPE },
  { _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, _______, _______, KC_F12,  KC_MINS, KC_RBRC, KC_BSLS, KC_EQL,  KC_JYEN },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL,  _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END  },
 },

/* Raise
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        |        | Reset  |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * |        | 1      | 2      | 3      | 4      | 5      |        |        |        | 6      | 7      | 8      | 9      | 0      | =      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        | LClick | RClick |        |        |        | Left   | Down   | Up     | Right  | +      | *      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        | Home   | PgDn   | PgUp   | End    | /      | -      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        | BkSpc  |        |        |        |        |        | Home   | PgDn   | PgUp   | End    |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_RAISE] = {
  { _______, _______, _______, _______, _______, _______, _______, RESET,   _______, _______, _______, _______, _______, _______, _______ },
  { _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______, _______, _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_UNDS },
  { _______, _______, _______, _______, KC_BTN1, KC_BTN2, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, JISPLUS, JISMULT },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_SLSH, KC_MINS },
  { _______, _______, _______, _______, _______, KC_BSPC, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END  },
 }

};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
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
