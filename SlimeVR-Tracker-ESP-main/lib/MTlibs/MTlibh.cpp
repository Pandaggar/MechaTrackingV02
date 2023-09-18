#include "MTlibh.h"

float MTsensorcalc::floatmap(float x, float in_min, float in_max, float out_min, float out_max){
      return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void MTsensorcalc::Hallrange(int pin, int* min, int* max, int* mid){
    double pinval = analogRead(pin);
  
    double pinmidval = 0;
    double pinmaxval = 0;
    double pinminval = 0;

    Serial.print("position magnet/hinge so that it is in the middle position");
    sleep(2);
    pinmidval = analogRead(pin);
    Serial.print("position magnet/hinge so that it is in the maximum position");
    sleep(2);
    pinmaxval = analogRead(pin);
    Serial.print("position magnet/hinge so that it is in the minimum position");
    sleep(2);
    pinminval = analogRead(pin);

    *min = pinminval;
    *max = pinmaxval;
    *mid = pinmidval;
}
