#ifndef MACROS_H
#define MACROS_H

#include "config.h"

#include <Kaleidoscope-Macros.h>

namespace kipples {
  namespace macros {
    enum {
      EMAIL,
      FIRMWARE_VERSION
    };

    const macro_t *email()
    {
      return Macros.type(PSTR("kipling.timothy@gmail.com"));
    }

    const macro_t *firmware_version()
    {
      return Macros.type(PSTR(FIRMWARE_VERSION_STRING));
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
  }
  return MACRO_NONE;
}
#endif /* MACROS_H */
