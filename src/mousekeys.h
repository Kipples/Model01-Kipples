#ifndef MOUSEKEYS_H
#define MOUSEKEYS_H

#include <Kaleidoscope.h>

#include <Kaleidoscope-MouseKeys.h>

namespace kipples {
  namespace mousekeys {
    inline void setup()
    {
      Kaleidoscope.use(&MouseKeys);

      /* defaults
	 MouseKeys.speed = 1; // pixels
	 MouseKeys.speedDelay = 0; // millis
	 MouseKeys.accelSpeed = 1; // pixels
	 MouseKeys.accelDelay = 50; // millis
	 MouseKeys.wheelSpeed = 1; // wheel ticks
	 MouseKeys.wheelDelay = 50; // millis
      */
    }
  }
}

#endif /* MOUSEKEYS_H */

