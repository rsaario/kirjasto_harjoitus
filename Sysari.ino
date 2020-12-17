#include "Sysari.h"
#include "ajastin.h"

ajastin T1(1000);
ajastin T2(500);
togle led(13);
togle led2 (12);
void setup() {
  Serial.begin(9600);
}

void loop() {
if(T1.timeIsUp()){
led.onoff();}
if(T2.timeIsUp()){
led2.onoff();}
}
