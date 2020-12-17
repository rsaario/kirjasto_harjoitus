#include "Arduino.h"
#include "ajastin.h"

ajastin::ajastin(unsigned long JAKSO)
{
  _vertailuHetki=millis()+JAKSO;
  _jaksonPituus=JAKSO;
  
}

bool ajastin::timeIsUp()
{
  unsigned long nykyHetki = millis();
    if( nykyHetki >= _vertailuHetki ){
    _vertailuHetki += _jaksonPituus;
    return true;
  }
  return false;
}
