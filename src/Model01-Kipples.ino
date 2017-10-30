// -*- mode: c++ -*-
#include <Kaleidoscope.h>

#include "config.h"

#include "led.h"
#include "macros.h"
#include "magiccombo.h"
#include "mousekeys.h"
#include "numlock.h"
#include "oneshot.h"
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
  kipples::oneshot::setup();
  kipples::mousekeys::setup();
  kipples::macros::setup();
}

void loop()
{
  Kaleidoscope.loop();
}
