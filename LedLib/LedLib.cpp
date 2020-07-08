#include "Arduino.h"
#include "LedLib.h"

LedLib::LedLib(byte pin)
{
  tmpPin = pin;
  pinMode(tmpPin, OUTPUT);
}

LedLib::BLINKS(int count, int delayms)
{
  delayms = delayms / 2 / count;
  for (int i = 0; i < count; i++)
  {
    digitalWrite(tmpPin, HIGH);
    delay(delayms);
    digitalWrite(tmpPin, LOW);
    delay(delayms);
  }
}

LedLib::FADEON(int delayms)
{
  delayms = delayms / 255;
  for (int i = 0; i < 255; i++)
  {
    analogWrite(tmpPin, i);
    delay(delayms);
  }
}


LedLib::FADEON(int delayms)
{
  delayms = delayms / 255;
  for (int i = 255; i < 0; i++)
  {
    analogWrite(tmpPin, i);
    delay(delayms);
  }
}

LedLib::PULSE(int delayms)
{
  delayms = delayms / 2;

  FADEON(delayms);

  FADEOFF(delayms);
}
