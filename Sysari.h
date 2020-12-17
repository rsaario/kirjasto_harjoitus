
#ifndef Sysari_h
#define Sysari_h

#include "Arduino.h"

#define off 255
#define on 0

class togle
{
  public:
    togle(int pin);
    void onoff();
  private:
    int _pin;
    int _state;
};
#endif
