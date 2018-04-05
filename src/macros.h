#ifndef MACROS_H
#define MACROS_H

#include "config.h"

#include <Kaleidoscope-Macros.h>

namespace kipples {
  namespace macros {
    enum {
      EMAIL,
      FIRMWARE_VERSION,
      STARCRAFT_GG,
      STARCRAFT_RESTART
    };

    const macro_t *email()
    {
      return Macros.type(PSTR("kipling.timothy@gmail.com"));
    }

    const macro_t *firmware_version()
    {
      return Macros.type(PSTR(FIRMWARE_VERSION_STRING));
    }

    const macro_t *starcraft_gg()
    {
      return MACRO(I(100),
		   T(Enter), T(G), T(G), T(Enter),
		   W(255),
		   D(LeftAlt), T(Q), U(LeftAlt));
    }

    const macro_t *starcraft_restart()
    {
      return MACRO(I(100),
		   T(F10), T(E), T(R), T(Enter));
    }

    inline void setup()
    {
      Kaleidoscope.use(&Macros);
    }
  }
}

const macro_t *macroAction(uint8_t macroIndex, uint8_t keyState)
{
  switch(macroIndex) {
  case kipples::macros::EMAIL:
    if (keyToggledOn(keyState)) {
      return kipples::macros::email();
    }
    break;
  case kipples::macros::FIRMWARE_VERSION:
    if (keyToggledOn(keyState)) {
      return kipples::macros::firmware_version();
    }
    break;
  case kipples::macros::STARCRAFT_GG:
    if(keyToggledOn(keyState)) {
      return kipples::macros::starcraft_gg();
    }
  case kipples::macros::STARCRAFT_RESTART:
    if(keyToggledOn(keyState)) {
      return kipples::macros::starcraft_restart();
    }
  }
  return MACRO_NONE;
}
#endif /* MACROS_H */
