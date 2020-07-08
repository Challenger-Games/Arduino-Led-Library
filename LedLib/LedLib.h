#ifndef LedLib_h
#define LedLib_h

#include "Arduino.h"

class LedLib
{
  public:
    LedLib(byte pin);
    BLINKS(int count, int delayms);
    FADEON(int delayms);
    FADEOFF(int delayms);
    PULSE(int delayms);

  private:
    byte tmpPin;
};

#endif
