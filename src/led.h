#ifndef LED_H_
#define LED_H_

#include <Kaleidoscope.h>

#include <Kaleidoscope-LEDEffect-Rainbow.h>
#include <Kaleidoscope-LEDControl.h>
#include <Kaleidoscope-LEDEffect-BootGreeting.h>
#include <LED-Off.h>

namespace kipples {
  namespace led {
    inline void setup()
    {
      Kaleidoscope.use(&BootGreetingEffect,
		       &LEDControl,
		       &LEDRainbowEffect,
		       &LEDOff);

      LEDOff.activate();

      /* defaults
      LEDControl.syncDelay = 16; // millis

      ActiveModColorEffect.highlight_color = CRGB(0xff, 0xff, 0xff);
      ActiveModColorEffect.sticky_color = CRGB(0xff, 0x00, 0x00);
      */
    }
  }
}

#endif /* LED_H_ */
