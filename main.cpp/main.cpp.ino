#include "bot.h"

#define hipPin 7
#define kneePin 8
#define anklePin 9



void setup() {
  Leg legOne(hipPin, kneePin, anklePin);
  legOne.setAngle(0, 0, 0);
}

void loop() {
  

}
