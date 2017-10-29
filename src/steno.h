#ifndef STENO_H
#define STENO_H

#include <Kaleidoscope.h>

#include <Kaleidoscope-Steno.h>

namespace kipples {
  namespace steno {
    inline void setup()
    {
      Kaleidoscope.use(&GeminiPR);
    }
  }
}

#endif /* STENO_H */
