// -*- mode: c++ -*-
#include <Kaleidoscope.h>

#include "config.h"

#include "led.h"
#include "macros.h"
#include "magiccombo.h"
#include "mousekeys.h"
#include "numlock.h"
#include "spacecadet.h"
#include "steno.h"

#include "keymap.h"

void setup()
{
  Serial.begin(9600);

  Kaleidoscope.setup();

  kipples::numlock::setup();
  kipples::led::setup();
  kipples::magiccombo::setup();
  kipples::spacecadet::setup();
  kipples::steno::setup();
  kipples::mousekeys::setup();
  kipples::macros::setup();

  Layer.defaultLayer(layers::WORKMAN);
}

void loop()
{
  Kaleidoscope.loop();

  if (Layer.isOn(kipples::layers::STENO)) {
    LEDControl.set_all_leds_to(CRGB(0x56, 0x80, 0x78));
  }
  
}
