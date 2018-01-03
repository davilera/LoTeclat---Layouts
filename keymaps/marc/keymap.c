#include "loteclat.h"
#include "emojis.h"

// Fillers to make layering more clear
#define _______ KC_TRNS
#define ___T___ KC_TRNS
#define XXXXXXX KC_NO

// Layer shorthand
#define _QW 0
#define _LW 1
#define _RS 2

// Some custom constants
#define KC_LEDS M(0)

/* ROWS GRID */
// .---------------------------------------------------------------------------------------------------------------.
// |       |       |       |       |       |       |       |       |       |       |       |       |       |       |
// |---------------------------------------------------------------------------------------------------------------|

/* ROW 5 (CUSTOM) */
// .---------------------------------------------------------------------------------------------------------------.
// |       |         |         |         |                     |         |         |       |       |       |       |
// '---------------------------------------------------------------------------------------------------------------'

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY - CUSTOM */
// .---------------------------------------------------------------------------------------------------------------.
// | º     | 1     | 2     | 3     | 4     | 5     | 6     | 7     | 8     | 9     | 0     | '     | ¡     | esc   |
// |---------------------------------------------------------------------------------------------------------------|
// | tab   | q     | w     | e     | r     | t     | y     | u     | i     | o     | p     | `     | _     | bksp  |
// |---------------------------------------------------------------------------------------------------------------|
// | raise | a     | s     | d     | f     | g     | h     | j     | k     | l     | ñ     | '     | ç     | enter |
// |---------------------------------------------------------------------------------------------------------------|
// | lshif | z     | x     | c     | v     | b     | n     | m     | ,     | .     | -     | rshif | up    | caps  |
// |---------------------------------------------------------------------------------------------------------------|
// | lower | lctrl   | lgui    | lalt    | space               | rctrl   | ralt    | left  | down  | up    | right |
// '---------------------------------------------------------------------------------------------------------------'

 [_QW] = {
  { KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_ESC  },
  { KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC },
  { MO(_RS), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT  },
  { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_CAPS },
  { MO(_LW), KC_LCTL, KC_LGUI, XXXXXXX, KC_LALT, XXXXXXX, KC_SPC,  XXXXXXX, KC_RCTL, KC_RALT, KC_NUBS, KC_LEFT, KC_DOWN, KC_RGHT },
 },

/* QWERTY - LOWERED */
// .---------------------------------------------------------------------------------------------------------------.
// |       | F1    | F2    | F3    | F4    | F5    | insrt | F6    | F7    | F8    | F9    | F10   | F11   | F12   |
// |---------------------------------------------------------------------------------------------------------------|
// |       | power | wake  |       |       |       | volup | bltop |       |       |       | prscr |       |       |
// |---------------------------------------------------------------------------------------------------------------|
// |       |       | sleep |       |       |       | voldn | left  | down  | up    | right | leds  |       |       |
// |---------------------------------------------------------------------------------------------------------------|
// |       |       |       |       |       |       | mute  | blbot | blcam | blsid |       |       |       |       |
// |---------------------------------------------------------------------------------------------------------------|
// |       |         |         |         | play/pause          | prev    | next    | home  | pgdn  | pgup  | end   |
// '---------------------------------------------------------------------------------------------------------------'

 [_LW] = {
  { _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_INS,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12  },
  { _______, KC_PWR,  KC_WAKE, _______, _______, _______, KC_VOLU, _______, KC_KP_7, _______, _______, KC_PSCR, _______, _______ },
  { _______, _______, KC_SLEP, _______, _______, _______, KC_VOLD, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_LEDS, _______, _______ },
  { _______, _______, _______, _______, _______, _______, KC_MUTE, _______, KC_KP_1, KC_KP_5, KC_KP_3, _______, _______, _______ },
  { _______, _______, KC_MPRV, XXXXXXX, KC_MNXT, XXXXXXX, KC_MPLY, XXXXXXX, _______, KC_KP_0, KC_HOME, KC_PGDN, KC_PGUP, KC_END  },
 },

/* QWERTY - RAISED */
 [_RS] = {
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
  { _______, EC_TWNK, EC_RWNK, EC_RAGE, EC_ROLL, EC_THNK, _______, EC_OK,   EC_UP,   EC_INLV, EC_OMG,  EC_PISS, _______, _______ },
  { _______, EC_ANGL, EC_SWT,  EC_DFCK, EC_FLSH, EC_GRIN, _______, EC_HUG,  EC_HRT,  EC_KISS, EC_LOL,  _______, _______, _______ },
  { _______, EC_ZZZ,  EC_COOL, EC_SUNG, EC_VICT, EC_BCPS, _______, EC_UNIM, EC_MUN,  EC_SHRG, EC_PALM, _______, _______, _______ },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
 },

};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro( keyrecord_t *record, uint8_t id, uint8_t opt ) {

	if ( ! record->event.pressed ) {
		return MACRO_NONE;
	}

	if ( 0 == id ) {
		#ifdef BACKLIGHT_ENABLE
			backlight_step();
		#endif
		return MACRO_NONE;
	}//end if


	switch( id ) {

		case 1:  return MACRO( EMOJI_ANGEL );
		case 2:  return MACRO( EMOJI_BICEPS );
		case 3:  return MACRO( EMOJI_SUNGLASSES );
		case 4:  return MACRO( EMOJI_DAFUCK );
		case 5:  return MACRO( EMOJI_RAGE );
		case 6:  return MACRO( EMOJI_FLUSHED );
		case 7:  return MACRO( EMOJI_GRIN );
		case 8:  return MACRO( EMOJI_HUG );
		case 9:  return MACRO( EMOJI_INLOVE );
		case 10: return MACRO( EMOJI_HEART );
		case 11: return MACRO( EMOJI_KISS );
		case 12: return MACRO( EMOJI_LOL );
		case 13: return MACRO( EMOJI_MUNCH );
		case 14: return MACRO( EMOJI_NOT_IMPRESSED );
		case 15: return MACRO( EMOJI_OMG );
		case 16: return MACRO( EMOJI_PISSED_OFF );
		case 17: return MACRO( EMOJI_WINK_TONGUE );
		case 18: return MACRO( EMOJI_ROLL );
		case 19: return MACRO( EMOJI_SWEAT_SMILE );
		case 20: return MACRO( EMOJI_THINKING );
		case 21: return MACRO( EMOJI_THUMBS_UP );
		case 22: return MACRO( EMOJI_VICTORY );
		case 23: return MACRO( EMOJI_WINK );
		case 24: return MACRO( EMOJI_COOL_SMILE );
		case 25: return MACRO( EMOJI_OK );
		case 26: return MACRO( EMOJI_ZZZ );
		case 27: return MACRO( EMOJI_SHRUGGIE );
		case 28: return MACRO( EMOJI_PALM_FACE );

	}

	return MACRO_NONE;
};


/* Turn LEDS off automatically after a while... */

#define LEDS_ON  0
#define LEDS_DIM 1
#define LEDS_OFF 2

#define LED_DIM_TIME 30000
#define LED_OFF_TIME 300000

int leds_mode = LEDS_ON;
int led_intensity;
int last_press;

bool process_record_user( uint16_t keycode, keyrecord_t *record ) {

	last_press = timer_read();
	if ( LEDS_ON != leds_mode ) {
		leds_mode = LEDS_ON;
		backlight_set( led_intensity );
	}//end if

	return true;

};

void matrix_scan_user( void ) {

	int time = timer_elapsed( last_press );

	if ( ! get_backlight_level() ) {
		return;
	}//end if

	if ( LED_OFF_TIME < time ) {
		leds_mode = LEDS_OFF;
		backlight_set( 0 );
		return;
	}//end if

	if ( LED_DIM_TIME < time ) {
		leds_mode = LEDS_DIM;
		backlight_set( 1 );
		return;
	}//end if

	led_intensity = get_backlight_level();

};
