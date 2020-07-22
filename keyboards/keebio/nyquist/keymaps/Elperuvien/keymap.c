#include QMK_KEYBOARD_H
#include "keymap_french.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _AZERTY 0
#define _LOWER 3
#define _RAISE 4
#define _ADJUST 16

enum custom_keycodes {
  AZERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* AZERTY
 * ,-----------------------------------------------------------------------------------.
 * |Adjust|   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   Z  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Tab  |   Q  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   M  |Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   W  |   X  |   C  |   V  |   B  |   N  |   ,  |   ;  |   :  |  !   |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | CTRL | GUI  | Alt  | INS  |Lower |Space |Space |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_AZERTY] = LAYOUT( \
  ADJUST,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL, \
  KC_ESC,  FR_A,    FR_Z,    FR_E,    FR_R,    FR_T,    FR_Y,    FR_U,    FR_I,    FR_O,    FR_P,    KC_BSPC, \
  KC_TAB,  FR_Q,    FR_S,    FR_D,    FR_F,    FR_G,    FR_H,    FR_J,    FR_K,    FR_L,    FR_M,    KC_ENT, \
  KC_LSFT, FR_W,    FR_X,    FR_C,    FR_V,    FR_B,    FR_N,    FR_COMM,    FR_SCLN, FR_COLN,  FR_EXLM, KC_RSFT , \
  KC_LCTL,  KC_LGUI, KC_LALT, KC_INS, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT \
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |      |      |   #  |   °  |   `  |   <  |   >  |   7  |   8  |   9  |   %  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   $  |   |  |   ~  |   "  |   {  |   }  |   4  |   5  |   6  |   ^  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   €  |   =  |   _  |   .  |   (  |   )  |   1  |   2  |   3  |   0  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  Pnd |   &  |   \  |   '  |   [  |   ]  |   +  |   /  |   *  |   -  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Debut|PageUp|PageDo| End  |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT( \
  _______ , _______ , FR_HASH , FR_DEG  , FR_GRV  , FR_LABK , FR_RABK , KC_P7   , KC_P8   , KC_P9   , FR_PERC , _______   , \
  _______ , FR_DLR  , FR_PIPE , KC_TILD , FR_DQUO , FR_LCBR , FR_RCBR , KC_P4   , KC_P5   , KC_P6   , FR_CIRC , _______   , \
  _______ , FR_EURO , FR_EQL  , FR_UNDS , FR_DOT  , FR_LPRN , FR_RPRN , KC_P1   , KC_P2   , KC_P3   , KC_P0   , KC_PIPE   , \
  _______ , FR_PND  , FR_AMPR , FR_BSLS , FR_QUOT , FR_LCBR , FR_RCBR , FR_PLUS , FR_SLSH , _______ , _______ , _______   , \
  _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , KC_HOME , KC_PGUP , KC_PGDN , KC_END  \
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |   <  |   >  |  F9  | F10  | F11  | F12  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   µ  |   ç  |   ù  |   @  |   {  |   }  |  F5  |  F6  |  F7  |  F8  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |   §  |   è  |   à  |   é  |   (  |   )  |  F1  |  F2  |  F3  |  F4  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |   /  |   .  |   ?  |   [  |   ]  |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT( \
  _______ , _______ , _______ , _______ , _______ , FR_LABK , FR_RABK , KC_F9   , KC_F10  , KC_F11  , KC_F12  , _______   , \
  _______ , FR_MICR , FR_CCED , FR_UGRV , FR_AT   , FR_LCBR , FR_RCBR , KC_F5   , KC_F6   , KC_F7   , KC_F8   , _______   , \
  _______ , FR_SECT , FR_EGRV , FR_AGRV , FR_EACU , FR_LPRN , FR_RPRN , KC_F1   , KC_F2   , KC_F3   , KC_F4   , _______   , \
  _______ , _______ , FR_SLSH , FR_DOT  , FR_QUES , FR_LCBR , FR_RCBR , KC_NUBS , _______ , _______ , _______ , _______   , \
  _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , KC_MNXT , KC_VOLD , KC_VOLU , KC_MPLY \
),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Reset|RGB Tg|RGB Md|Hue Up|Hue Dn|Sat Up|Sat Dn|Val Up|Val Dn|      |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |Aud on|Audoff|AGnorm|AGswap|Qwerty|Colemk|Dvorak|      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] =  LAYOUT( \
	KC_F1 , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12    , \
  _______ , RESET   , RGB_TOG , RGB_MOD , RGB_HUD , RGB_HUI , RGB_SAD , RGB_SAI , RGB_VAD , RGB_VAI , _______ , KC_DEL    , \
  _______ , _______ , _______ , AU_ON   , AU_OFF  , AG_NORM , AG_SWAP , AZERTY  , _______ , _______ , _______ , _______   , \
  _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______   , \
  _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ \
)


};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case AZERTY:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_qwerty);
        #endif
        persistent_default_layer_set(1UL<<_AZERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}
