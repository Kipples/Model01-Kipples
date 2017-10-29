#ifndef LED_H_
#define LED_H_

#include <Kaleidoscope.h>

#include <Kaleidoscope-LED-ActiveModColor.h>
#include <Kaleidoscope-LED-Stalker.h>
#include <Kaleidoscope-LEDControl.h>
#include <Kaleidoscope-LEDEffect-BootGreeting.h>
#include <LED-Off.h>

namespace kipples {
  namespace led {
    inline void setup()
    {
      Kaleidoscope.use(&BootGreetingEffect,
		       &LEDControl,
		       &ActiveModColorEffect,
		       &StalkerEffect,
		       &LEDOff);

      StalkerEffect.variant = STALKER(BlazingTrail);

      LEDOff.activate();

      /* defaults
      LEDControl.syncDelay = 16; // millis

      StalkerEffect.stepLength = 50; // millis

      ActiveModColorEffect.highlight_color = CRGB(0xff, 0xff, 0xff);
      ActiveModColorEffect.sticky_color = CRGB(0xff, 0x00, 0x00);
      */
    }
  }
}

#endif /* LED_H_ */
