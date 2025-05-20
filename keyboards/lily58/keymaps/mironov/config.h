#pragma once

/* -----| TAP |----- */
#define DEBOUNCE 10
#define QUICK_TAP_TERM 0

/* -----| Bongo Cat |----- */
// #define BCAT_ORTHO_LAYERS

/* -----| HAND CONFIGURATION |-----*/
// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS

// #define TAPPING_FORCE_HOLD
// #define TAPPING_TERM 100


/* -----| ANIMATIONS |----- */
// #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #define RGBLIGHT_EFFECT_RAINBOW_MOOD
// #define RGBLIGHT_EFFECT_BREATHING
// #define RGBLIGHT_EFFECT_TWINKLE

/* -----| RGB LIGHT |----- */
#undef RGBLED_NUM
#undef RGBLIGHT_LED_COUNT

#define RGBLIGHT_SPLIT
#define RGBLIGHT_SLEEP
#define RGBLED_NUM           35
#define RGBLIGHT_LED_COUNT   RGBLED_NUM
#define RGBLIGHT_LIMIT_VAL   120
#define RGBLIGHT_DEFAULT_HUE 120
#define RGBLIGHT_DEFAULT_SAT 25
#define RGBLIGHT_DEFAULT_VAL 110
#define RGBLIGHT_HUE_STEP    10
#define RGBLIGHT_SAT_STEP    17
#define RGBLIGHT_VAL_STEP    17

/* -----| Underglow |----- */
// #undef RGBLED_NUM
// #define RGBLED_NUM 14    // Number of LEDs
// #define RGBLIGHT_ANIMATIONS
// #define RGBLIGHT_SLEEP
