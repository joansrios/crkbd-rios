#include QMK_KEYBOARD_H
#include <stdio.h>

#define L_QWERTY 0
#define L_NAVIGATE 2
#define L_SYMBOLS 4
#define L_NUMPAD 8
#define L_ADJUST 16

// Key Overrides                                                         Key      Replacement
const key_override_t pipe_key_override   = ko_make_basic(MOD_MASK_SHIFT, KC_PIPE, KC_QUES);

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = { &pipe_key_override};

enum {
  TD_TILD,
  TD_SLH,
  TD_ALT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-------------------------------------------------------------------.                       ,------------------------------------------------------------------------.
    LT(3, KC_ESC),      KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,                              KC_Y,      KC_U,      KC_I,      KC_O,         KC_P,       KC_BSPC,
  //|-----24-----+----23----+----18----+----17----+----10----+-----9----|                       |----36----+----37----+----44----+----45----+-------50----+--------51----|
          KC_LCTL,      KC_A,      KC_S,      KC_D,      KC_F,      KC_G,                              KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   TD(TD_TILD),
  //|-----25-----+----22----+----19----+----16----+----11----+----8-----|                       |----35----+----38----+----43----+----46----+-------49----+--------52----|
          KC_LSFT,      KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,                              KC_N,      KC_M,   KC_COMM,    KC_DOT,   TD(TD_SLH),       KC_RSFT,
  //|-----26-----+----21----+----20----+----15----+----12----+----7-----+---------|  |----------+----34----+----39----+----42----+----47----+-------48----+--------53----|
                                                      KC_LGUI,     MO(1),   KC_SPC,       KC_ENT,     MO(2), TD(TD_ALT)
                                                //`----14----+----13----+----6----'  `----33----+----40----+----41----'
  ),

  [1] = LAYOUT_split_3x6_3(
  //,-------------------------------------------------------------------.                       ,------------------------------------------------------------------------.
           KC_TAB,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                           XXXXXXX,   XXXXXXX,     KC_UP,   XXXXXXX,      KC_PSCR,        KC_DEL,
  //|-----24-----+----23----+----18----+----17----+----10----+-----9----|                       |----36----+----37----+----44----+----45----+-------50----+--------51----|
          KC_LCTL,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                           KC_PGUP,   KC_LEFT,   KC_DOWN,  KC_RIGHT,      KC_HOME,       XXXXXXX,
  //|-----25-----+----22----+----19----+----16----+----11----+----8-----|                       |----35----+----38----+----43----+----46----+-------49----+--------52----|
          KC_LSFT,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                           KC_PGDN,   KC_MPRV,   KC_MPLY,   KC_MNXT,       KC_END,       KC_RSFT,
  //|-----26-----+----21----+----20----+----15----+----12----+----7-----+---------|  |----------+----34----+----39----+----42----+----47----+-------48----+--------53----|
                                                      KC_LGUI,   _______,   KC_SPC,       KC_ENT,     MO(4), TD(TD_ALT)
                                                //`----14----+----13----+----6----'  `----33----+----40----+----41----'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-------------------------------------------------------------------.                       ,------------------------------------------------------------------------.
          XXXXXXX,     KC_AT,   XXXXXXX,   KC_LPRN,   KC_RPRN,   XXXXXXX,                           KC_PERC,   XXXXXXX,   KC_AMPR,   KC_PIPE,      XXXXXXX,       KC_BSPC,
  //|-----24-----+----23----+----18----+----17----+----10----+-----9----|                       |----36----+----37----+----44----+----45----+-------50----+--------51----|
          XXXXXXX,   KC_TILD,   XXXXXXX,   KC_LCBR,   KC_RCBR,   XXXXXXX,                            KC_DLR,   XXXXXXX,   XXXXXXX,   XXXXXXX,      XXXXXXX,       KC_MINS,
  //|-----25-----+----22----+----19----+----16----+----11----+----8-----|                       |----35----+----38----+----43----+----46----+-------49----+--------52----|
          XXXXXXX,   XXXXXXX,   XXXXXXX,   KC_LBRC,   KC_RBRC,   XXXXXXX,                           KC_HASH,   XXXXXXX,   XXXXXXX,   XXXXXXX,      XXXXXXX, RSFT(KC_MINS),
  //|-----26-----+----21----+----20----+----15----+----12----+----7-----+---------|  |----------+----34----+----39----+----42----+----47----+-------48----+--------53----|
                                                      KC_LGUI,     MO(4),   KC_SPC,       KC_ENT,   _______, TD(TD_ALT)
                                                //`----14----+----13----+----6----'  `----33----+----40----+----41----'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-------------------------------------------------------------------.                       ,------------------------------------------------------------------------.
          XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                           KC_PMNS,      KC_7,      KC_8,      KC_9,      KC_PPLS,       KC_BSPC,
  //|-----24-----+----23----+----18----+----17----+----10----+-----9----|                       |----36----+----37----+----44----+----45----+-------50----+--------51----|
          XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                           KC_PSLS,      KC_4,      KC_5,      KC_6,      KC_PAST,       KC_CIRC,
  //|-----25-----+----22----+----19----+----16----+----11----+----8-----|                       |----35----+----38----+----43----+----46----+-------49----+--------52----|
          XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                           KC_EXLM,      KC_1,      KC_2,      KC_3,       KC_EQL,       XXXXXXX,
  //|-----26-----+----21----+----20----+----15----+----12----+----7-----+---------|  |----------+----34----+----39----+----42----+----47----+-------48----+--------53----|
                                                      KC_LGUI,   _______,   KC_SPC,       KC_ENT,   _______,      KC_0
                                                //`----14----+----13----+----6----'  `----33----+----40----+----41----'
  ),

  [4] = LAYOUT_split_3x6_3(
  //,-------------------------------------------------------------------.                       ,------------------------------------------------------------------------.
          QK_BOOT,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,                           XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,      XXXXXXX,       XXXXXXX,
  //|-----24-----+----23----+----18----+----17----+----10----+-----9----|                       |----36----+----37----+----44----+----45----+-------50----+--------51----|
          RGB_TOG,   RGB_HUI,   RGB_SAI,   RGB_VAI,   RGB_SPI,   XXXXXXX,                             KC_F1,     KC_F2,     KC_F3,     KC_F4,        KC_F5,         KC_F6,
  //|-----25-----+----22----+----19----+----16----+----11----+----8-----|                       |----35----+----38----+----43----+----46----+-------49----+--------52----|
          RGB_MOD,   RGB_HUD,   RGB_SAD,   RGB_VAD,   RGB_SPD,   XXXXXXX,                             KC_F7,     KC_F8,     KC_F9,    KC_F10,       KC_F11,        KC_F12,
  //|-----26-----+----21----+----20----+----15----+----12----+----7-----+---------|  |----------+----34----+----39----+----42----+----47----+-------48----+--------53----|
                                                      KC_LGUI,   _______,   KC_SPC,       KC_ENT,   _______, TD(TD_ALT)
                                                //`----14----+----13----+----6----'  `----33----+----40----+----41----'
  )
};

void matrix_init_user(void) {
    #ifdef RGBLIGHT_ENABLE
      RGB_current_mode = rgblight_config.mode;
    #endif
}
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
  #ifdef RGB_MATRIX_ENABLE
    if(layer_state == L_SYMBOLS || layer_state == L_NAVIGATE || layer_state == L_NUMPAD) {
      for (int i = 0; i < 54; i++) {
        RGB_MATRIX_INDICATOR_SET_COLOR(i, 0, 0, 0);
      }
    }
    switch (layer_state) {
      case L_NAVIGATE:
          //arrows
          RGB_MATRIX_INDICATOR_SET_COLOR(38, 0,204,204);
          RGB_MATRIX_INDICATOR_SET_COLOR(43, 0,204,204);
          RGB_MATRIX_INDICATOR_SET_COLOR(44, 0,204,204);
          RGB_MATRIX_INDICATOR_SET_COLOR(46, 0,204,204);
          // media control
          RGB_MATRIX_INDICATOR_SET_COLOR(39, 204,204,0);
          RGB_MATRIX_INDICATOR_SET_COLOR(42, 204,204,0);
          RGB_MATRIX_INDICATOR_SET_COLOR(47, 204,204,0);
          // end - down
          RGB_MATRIX_INDICATOR_SET_COLOR(34, 204,102,0);
          RGB_MATRIX_INDICATOR_SET_COLOR(48, 204,102,0);
          // home - up
          RGB_MATRIX_INDICATOR_SET_COLOR(35, 0,204,0);
          RGB_MATRIX_INDICATOR_SET_COLOR(49, 0,204,0);
          // other
          RGB_MATRIX_INDICATOR_SET_COLOR(6, 127,127,127);
          RGB_MATRIX_INDICATOR_SET_COLOR(14, 127,127,127);
          RGB_MATRIX_INDICATOR_SET_COLOR(24, 127,127,127);
          RGB_MATRIX_INDICATOR_SET_COLOR(25, 127,127,127);
          RGB_MATRIX_INDICATOR_SET_COLOR(26, 127,127,127);
          RGB_MATRIX_INDICATOR_SET_COLOR(33, 127,127,127);
          RGB_MATRIX_INDICATOR_SET_COLOR(40, 127,127,127);
          RGB_MATRIX_INDICATOR_SET_COLOR(41, 127,127,127);
          RGB_MATRIX_INDICATOR_SET_COLOR(50, 127,127,127);
          RGB_MATRIX_INDICATOR_SET_COLOR(51, 127,127,127);
          RGB_MATRIX_INDICATOR_SET_COLOR(53, 127,127,127);
      break;

      case L_SYMBOLS:
        //braces
        RGB_MATRIX_INDICATOR_SET_COLOR(10, 204,0,0);
        RGB_MATRIX_INDICATOR_SET_COLOR(17, 204,0,0);
        RGB_MATRIX_INDICATOR_SET_COLOR(11, 204,102,0);
        RGB_MATRIX_INDICATOR_SET_COLOR(16, 204,102,0);
        RGB_MATRIX_INDICATOR_SET_COLOR(12, 204,204,0);
        RGB_MATRIX_INDICATOR_SET_COLOR(15, 204,204,0);
        //other symbols
        RGB_MATRIX_INDICATOR_SET_COLOR(22, 204,102,0);
        RGB_MATRIX_INDICATOR_SET_COLOR(23, 204,0,0);
        RGB_MATRIX_INDICATOR_SET_COLOR(34, 51,255,255);
        RGB_MATRIX_INDICATOR_SET_COLOR(35, 0,204,0);
        RGB_MATRIX_INDICATOR_SET_COLOR(36, 127,0,255);
        RGB_MATRIX_INDICATOR_SET_COLOR(44, 127,0,255);
        RGB_MATRIX_INDICATOR_SET_COLOR(45, 127,0,255);
        RGB_MATRIX_INDICATOR_SET_COLOR(52, 0,204,0);
        RGB_MATRIX_INDICATOR_SET_COLOR(53, 51,255,255);
        // other
        RGB_MATRIX_INDICATOR_SET_COLOR(6, 127,127,127);
        RGB_MATRIX_INDICATOR_SET_COLOR(13, 127,127,127);
        RGB_MATRIX_INDICATOR_SET_COLOR(14, 127,127,127);
        RGB_MATRIX_INDICATOR_SET_COLOR(33, 127,127,127);
        RGB_MATRIX_INDICATOR_SET_COLOR(41, 127,127,127);
        RGB_MATRIX_INDICATOR_SET_COLOR(51, 127,127,127);
      break;

      case L_NUMPAD:
        // decrease
        RGB_MATRIX_INDICATOR_SET_COLOR(34, 204,102,0);
        RGB_MATRIX_INDICATOR_SET_COLOR(35, 204,0,0);
        RGB_MATRIX_INDICATOR_SET_COLOR(36, 204,0,0);
        // equal
        RGB_MATRIX_INDICATOR_SET_COLOR(48, 0,204,0);
        // increase
        RGB_MATRIX_INDICATOR_SET_COLOR(49, 0,0,204);
        RGB_MATRIX_INDICATOR_SET_COLOR(50, 0,0,204);
        // exp
        RGB_MATRIX_INDICATOR_SET_COLOR(52, 127,0,255);
        //numbers
        RGB_MATRIX_INDICATOR_SET_COLOR(37, 0,204,204);
        RGB_MATRIX_INDICATOR_SET_COLOR(38, 0,204,204);
        RGB_MATRIX_INDICATOR_SET_COLOR(39, 0,204,204);
        RGB_MATRIX_INDICATOR_SET_COLOR(41, 0,204,204);
        RGB_MATRIX_INDICATOR_SET_COLOR(42, 0,204,204);
        RGB_MATRIX_INDICATOR_SET_COLOR(43, 0,204,204);
        RGB_MATRIX_INDICATOR_SET_COLOR(44, 0,204,204);
        RGB_MATRIX_INDICATOR_SET_COLOR(45, 0,204,204);
        RGB_MATRIX_INDICATOR_SET_COLOR(46, 0,204,204);
        RGB_MATRIX_INDICATOR_SET_COLOR(47, 0,204,204);
        // other
        RGB_MATRIX_INDICATOR_SET_COLOR(6, 127,127,127);
        RGB_MATRIX_INDICATOR_SET_COLOR(14, 127,127,127);
        RGB_MATRIX_INDICATOR_SET_COLOR(33, 127,127,127);
        RGB_MATRIX_INDICATOR_SET_COLOR(51, 127,127,127);
      break;
    }
    return true;
  #endif
}

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // char tap dances
    [TD_TILD] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_GRV),
    [TD_SLH] = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, KC_BSLS),
    // functional keys tap dances
    [TD_ALT] = ACTION_TAP_DANCE_DOUBLE(KC_RALT, KC_LALT),
};

#ifdef OLED_ENABLE
  oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
      return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    }
    return rotation;
  }

  void oled_render_layer_state(void) {
      oled_write_P(PSTR("Layer: "), false);
      switch (layer_state) {
          case L_QWERTY:
              oled_write_ln_P(PSTR("Default"), false);
              break;
          case L_NAVIGATE:
              oled_write_ln_P(PSTR("Navigate"), false);
              break;
          case L_SYMBOLS:
              oled_write_ln_P(PSTR("Symbols"), false);
              break;
          case L_NUMPAD:
              oled_write_ln_P(PSTR("Numpad"), false);
              break;
          case L_ADJUST:
          case L_ADJUST|L_NAVIGATE:
          case L_ADJUST|L_SYMBOLS:
          case L_ADJUST|L_NAVIGATE|L_SYMBOLS:
          default:
              oled_write_ln_P(PSTR("Adjust"), false);
              break;
      }
  }


  char keylog_str[24] = {};

  const char code_to_name[60] = {
      ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
      'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
      'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
      '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
      'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
      '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

  void set_keylog(uint16_t keycode, keyrecord_t *record) {
      char name = ' ';
      if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
          (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
      if (keycode < 60) {
          name = code_to_name[keycode];
      }

      // update keylog
      snprintf(keylog_str, sizeof(keylog_str), "key: %dx%d, k%2d : %c",
              record->event.key.row, record->event.key.col,
              keycode, name);
  }

  void oled_render_keylog(void) {
      oled_write(keylog_str, false);
  }

  void render_bootmagic_status(bool status) {
      /* Show Ctrl-Gui Swap options */
      static const char PROGMEM logo[][2][3] = {
          {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
          {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
      };
      if (status) {
          oled_write_ln_P(logo[0][0], false);
          oled_write_ln_P(logo[0][1], false);
      } else {
          oled_write_ln_P(logo[1][0], false);
          oled_write_ln_P(logo[1][1], false);
      }
  }

  void oled_render_logo(void) {
      static const char PROGMEM crkbd_logo[] = {
          0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
          0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
          0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
          0};
      oled_write_P(crkbd_logo, false);
  }

  bool oled_task_user(void) {
      if (is_keyboard_master()) {
          oled_render_layer_state();
          oled_render_keylog();
      } else {
          oled_render_logo();
      }
      return false;
  }

  bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
      set_keylog(keycode, record);
    }
    return true;
  }
#endif // OLED_ENABLE
