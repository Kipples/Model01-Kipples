#ifndef MAGICCOMBO_H
#define MAGICCOMBO_H

#include <Kaleidoscope.h>

#include <Kaleidoscope-MagicCombo.h>

#include "layers.h"

namespace kipples {
  namespace magiccombo {
    enum {
      STENO,
      QWERTY,
      STARCRAFT
    };

    static void toggleQwerty()
    {
      if(Layer.isOn(layers::QWERTY)) {
	Layer.defaultLayer(layers::WORKMAN);
      } else {
	Layer.defaultLayer(layers::QWERTY);
      }
    }

    static void toggleSteno()
    {
      if(Layer.isOn(layers::STENO)) {
	Layer.off(layers::STENO);
      } else {
	Layer.on(layers::STENO);
      }
    }

    static void toggleStarcraft()
    {
      if(Layer.isOn(layers::STARCRAFT)) {
	Layer.off(layers::STARCRAFT);
      } else {
	Layer.on(layers::STARCRAFT);
      }
    }

    static const kaleidoscope::MagicCombo::combo_t magic_combos[] PROGMEM = {
      // Palm keys + 6
      [STENO] = {
	R3C6,
	R3C9 | R0C10
      },
      // Palm keys + Q
      [QWERTY] = {
	R1C1 | R3C6,
	R3C9
      },
      // Palm keys + S + C
      [STARCRAFT] = {
        R2C2 | R3C4 | R3C6,
	R3C9
      },
      {0,0}
    };

    inline void setup()
    {
      Kaleidoscope.use(&MagicCombo);
      MagicCombo.magic_combos = kipples::magiccombo::magic_combos;

      /* defaults
	 MagicCombo.min_interval = 500; // millis
       */
    }
  }
}

void magicComboActions(uint8_t combo_index, uint32_t left_hand, uint32_t right_hand)
{
  switch (combo_index) {
  case kipples::magiccombo::STENO:
    kipples::magiccombo::toggleSteno();
    break;
  case kipples::magiccombo::QWERTY:
    kipples::magiccombo::toggleQwerty();
    break;
  case kipples::magiccombo::STARCRAFT:
    kipples::magiccombo::toggleStarcraft();
    break;
  }
}

#endif /* MAGICCOMBO_H */
