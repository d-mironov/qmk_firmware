/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define BCAT_ORTHO_LAYERS

/* Select hand configuration */

// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS

// #define TAPPING_FORCE_HOLD
// #define TAPPING_TERM 100

#undef RGBLED_NUM

// Define which animations to use to safe space
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_TWINKLE

#define RGBLIGHT_SPLIT
#define RGBLIGHT_SLEEP
#define RGBLED_NUM           35
#define RGBLIGHT_LIMIT_VAL   120
#define RGBLIGHT_DEFAULT_HUE 120
#define RGBLIGHT_DEFAULT_SAT 25
#define RGBLIGHT_DEFAULT_VAL 110
#define RGBLIGHT_HUE_STEP    10
#define RGBLIGHT_SAT_STEP    17
#define RGBLIGHT_VAL_STEP    17

// Underglow
/*
#undef RGBLED_NUM
#define RGBLED_NUM 14    // Number of LEDs
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_SLEEP
*/
