#include <Kaleidoscope.h>
#include <Kaleidoscope-MouseKeys.h>
#include <Kaleidoscope-LEDControl.h>
#include <Kaleidoscope-Numlock.h>
#include <Kaleidoscope-Steno.h>
#include <Kaleidoscope-Macros.h>

#include "layers.h"
#include "macros.h"

namespace layers = kipples::layers;
namespace macros = kipples::macros;

const Key keymaps[][ROWS][COLS] PROGMEM = {
  [layers::STARCRAFT] = KEYMAP_STACKED
  (Key_Escape, ___, Key_F2, Key_F3, Key_F4, ___, Key_0,
   Key_1, Key_2, Key_3, Key_4, Key_5, Key_6, Key_8,
   Key_LeftShift, Key_C, Key_J, Key_T, Key_B, Key_7,
   Key_Space, Key_R, Key_E, Key_U, Key_K, Key_9, Key_LeftShift,
   Key_A, Key_H, Key_P, Key_S,
   Key_LeftControl,

   ___, ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___, ___, ___,
   M(macros::STARCRAFT_GG), ___, ___, ___, ___, ___, M(macros::STARCRAFT_RESTART),
   ___, ___, ___, ___,
   ShiftToLayer(layers::WORKMAN)),

  [layers::WORKMAN] = KEYMAP_STACKED
  (XXX, Key_1, Key_2, Key_3, Key_4, Key_5, Key_LEDEffectNext,
   Key_Backtick, Key_Q, Key_D, Key_R, Key_W, Key_B, Key_LeftBracket,
   Key_Tab, Key_A, Key_S, Key_H, Key_T, Key_G,
   Key_LeftGui, Key_Z, Key_X, Key_M, Key_C, Key_V, Key_Escape,
   Key_LeftShift, Key_Spacebar, Key_Enter, Key_LeftControl,
   ShiftToLayer(layers::FUNCTION),

   M(macros::EMAIL),  Key_6, Key_7, Key_8, Key_9, Key_0, Key_KeypadNumLock,
   Key_RightBracket, Key_J, Key_F, Key_U, Key_P, Key_Semicolon, Key_Equals,
   Key_Y, Key_N, Key_E, Key_O, Key_I, Key_Quote,
   Key_RightAlt, Key_K, Key_L, Key_Comma, Key_Period, Key_Slash, Key_Minus,
   Key_RightControl, Key_LeftAlt, Key_Backspace, Key_RightShift,
   ShiftToLayer(layers::FUNCTION)),

  [layers::QWERTY] = KEYMAP_STACKED
  (___, Key_1, Key_2, Key_3, Key_4, Key_5, Key_LEDEffectNext,
   Key_Backtick, Key_Q, Key_W, Key_E, Key_R, Key_T, Key_Tab,
   Key_PageUp, Key_A, Key_S, Key_D, Key_F, Key_G,
   Key_PageDown, Key_Z, Key_X, Key_C, Key_V, Key_B, Key_Escape,
   Key_LeftControl, Key_Backspace, Key_LeftGui, Key_LeftShift,
   ShiftToLayer(layers::FUNCTION),

   ___, Key_6, Key_7, Key_8, Key_9, Key_0, Key_KeypadNumLock,
   Key_Enter, Key_Y, Key_U, Key_I, Key_O, Key_P, Key_Equals,
   Key_H, Key_J, Key_K, Key_L, Key_Semicolon, Key_Quote,
   Key_RightAlt, Key_N, Key_M, Key_Comma, Key_Period, Key_Slash, Key_Minus,
   Key_RightShift, Key_LeftAlt, Key_Spacebar, Key_RightControl,
   ShiftToLayer(layers::FUNCTION)),

  [layers::FUNCTION] =  KEYMAP_STACKED
  (M(macros::FIRMWARE_VERSION), Key_F1, Key_F2, Key_F3, Key_F4, Key_F5, XXX,
   Key_Tab,  ___, Key_mouseUp, ___, Key_mouseBtnR, Key_mouseWarpEnd, Key_mouseWarpNE,
   Key_Home, Key_mouseL, Key_mouseDn, Key_mouseR, Key_mouseBtnL, Key_mouseWarpNW,
   Key_End,  Key_PrintScreen, Key_Insert, ___, Key_mouseBtnM, Key_mouseWarpSW, Key_mouseWarpSE,
   ___, Key_Enter, ___, ___,
   ___,

   Consumer_ScanPreviousTrack, Key_F6, Key_F7, Key_F8, Key_F9, Key_F10, Key_F11,
   Consumer_PlaySlashPause, Consumer_ScanNextTrack, Key_LeftCurlyBracket, Key_RightCurlyBracket, Key_UpArrow, Key_RightBracket, Key_F12,
   Key_LeftArrow, Key_DownArrow, Key_UpArrow, Key_RightArrow, ___, ___,
   Key_PcApplication, Key_Mute, Consumer_VolumeDecrement, Consumer_VolumeIncrement, ___, Key_Backslash, Key_Pipe,
   ___, ___, Key_Delete, ___,
   ___),

  [layers::NUMPAD] =  KEYMAP_STACKED
  (___, ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___,
   ___,

   ___, ___, Key_Keypad7, Key_Keypad8, Key_Keypad9, Key_KeypadSubtract, ___,
   ___, ___, Key_Keypad4, Key_Keypad5, Key_Keypad6, Key_KeypadAdd, ___,
   ___, Key_Keypad1, Key_Keypad2, Key_Keypad3, Key_Equals, Key_Quote,
   ___, ___, Key_Keypad0, Key_KeypadDot, Key_KeypadMultiply, Key_KeypadDivide, Key_Enter,
   ___, ___, ___, ___,
   ___),

  [layers::STENO] = KEYMAP_STACKED
  (XXX, XXX, XXX, XXX, XXX, XXX, S(N6),
   XXX, S(N1), S(N2), S(N3), S(N4), S(N5), S(ST1),
   S(FN), S(S1), S(TL), S(PL), S(HL), S(ST1),
   S(PWR), S(S2), S(KL), S(WL), S(RL), S(ST2), S(ST2),

   S(A), S(O), XXX, S(RE1),
   XXX,

   S(N7), XXX, XXX, XXX, XXX, XXX, XXX,
   S(ST3), S(N8), S(N9), S(NA), S(NB), S(NC), XXX,
   S(ST3), S(FR), S(PR), S(LR), S(TR), S(DR),
   S(ST4), S(ST4), S(RR), S(BR), S(GR), S(SR), S(ZR),

   S(RE2), XXX, S(E), S(U),
   XXX)
  
};
