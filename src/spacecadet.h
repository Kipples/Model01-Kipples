#ifndef SPACECADET_H
#define SPACECADET_H

#include <Kaleidoscope.h>
#include <Kaleidoscope-SpaceCadet.h>

namespace kipples {
  namespace spacecadet {
    inline void setup()
    {
      Kaleidoscope.use(&SpaceCadet);

      static kaleidoscope::SpaceCadet::KeyBinding spacecadetmap[] = {
	{Key_LeftShift, Key_LeftParen, 250},
	{Key_RightShift, Key_RightParen, 250},
	SPACECADET_MAP_END
      };

      SpaceCadet.map = spacecadetmap;

      /* defaults
	 SpaceCadet.time_out = 1000; // millis
       */
    }
  }
}

#endif /* SPACECADET_H */
