
#include QMK_KEYBOARD_H
#include <stdio.h>
#include "lily58.h"

#define L_BASE 0
#define L_LOWER (1 << 1)
#define L_RAISE (1 << 2)
#define _L_ADJUST (1 << 3)
#define L_ADJUST_L (_L_ADJUST | L_LOWER)
#define L_ADJUST_R (_L_ADJUST | L_RAISE)
// #define L_ADJUST_TRI (L_ADJUST | L_RAISE | L_LOWER)

char layer_state_str[24];

const char *read_layer_state(void) {
  switch (layer_state)
  {
  case L_BASE:
    snprintf(layer_state_str, sizeof(layer_state_str), "LayerBase");
    break;
  case L_RAISE:
    snprintf(layer_state_str, sizeof(layer_state_str), "LayerRaise");
    break;
  case L_LOWER:
    snprintf(layer_state_str, sizeof(layer_state_str), "LayerLower");
    break;
  case L_ADJUST_L:
    snprintf(layer_state_str, sizeof(layer_state_str), "LayerAdj");
    break;
  case L_ADJUST_R:
    snprintf(layer_state_str, sizeof(layer_state_str), "LayerAdj");
    break;
  default:
    snprintf(layer_state_str, sizeof(layer_state_str), "LayerUndef-%ld", layer_state);
  }

  return layer_state_str;
}
