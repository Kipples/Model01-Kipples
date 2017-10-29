#ifndef NUMLOCK_H
#define NUMLOCK_H

#include <Kaleidoscope.h>
#include <Kaleidoscope-Numlock.h>

#include "layers.h"

namespace kipples {
  namespace numlock {
    inline void setup()
    {
      Kaleidoscope.use(&NumLock);
      NumLock.numPadLayer = layers::NUMPAD;
    }
  }
}

#endif /* NUMLOCK_H */
