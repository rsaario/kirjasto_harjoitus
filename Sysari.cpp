#include "Sysari.h"

togle::togle(int pin)
{
  pinMode(pin, OUTPUT);
  _state = off;
  _pin = pin;
  digitalWrite(_pin,_state);
}



void togle::onoff(){
  if(_state == off){
  _state = on;
  }else {_state = off;}
  
  digitalWrite (_pin, _state);
}
