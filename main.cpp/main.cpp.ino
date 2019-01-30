#include "bot.h"

#define hipPinFrontRight 26
#define hipPinFrontLeft 23
#define hipPinMidRight 29
#define hipPinMidLeft 38
#define hipPinBackRight 32
#define hipPinBackLeft 35

#define kneePinFrontRight 27
#define kneePinFrontLeft 24
#define kneePinMidRight 30
#define kneePinMidLeft 39
#define kneePinBackRight 33
#define kneePinBackLeft 36

#define anklePinFrontRight 28
#define anklePinFrontLeft 25
#define anklePinMidRight 31
#define anklePinMidLeft 40
#define anklePinBackRight 34
#define anklePinBackLeft 37



void setup() {
  Leg legFrontRight(hipPinFrontRight, kneePinFrontRight, anklePinFrontRight);
  Leg legFrontLeft(hipPinFrontLeft, kneePinFrontLeft, anklePinFrontLeft);
  Leg legMidRight(hipPinMidRight, kneePinMidRight, anklePinMidRight);
  Leg legMidLeft(hipPinMidLeft, kneePinMidLeft, anklePinMidLeft);
  Leg legBackRight(hipPinBackRight, kneePinBackRight, anklePinBackRight);
  Leg legBackLeft(hipPinBackLeft, kneePinBackLeft, anklePinBackLeft);

  legFrontRight.setAngle(90, 80, 40);
  legFrontLeft.setAngle(90, 30, 80);
  legMidRight.setAngle(90, 55, 70);
  legMidLeft.setAngle(90, 60, 70);
  legBackRight.setAngle(90, 40, 70);
  legBackLeft.setAngle(50, 30, 0);

  legFrontRight.setAngle(90, 130, 140);
  legFrontLeft.setAngle(90, 80, 180);
  legMidRight.setAngle(90, 105, 170);
  legMidLeft.setAngle(90, 110, 170);
  legBackRight.setAngle(90, 90, 170);
  legBackLeft.setAngle(50, 80, 100);
  
  while(true)
  {
      
      legFrontLeft.setHipAngle(75);
      legMidRight.setHipAngle(75);
      legBackLeft.setHipAngle(35);
      delay(2000);

      legFrontRight.setHipAngle(105);
      legMidLeft.setHipAngle(105);
      legBackRight.setHipAngle(105);
      delay(2000);

      legFrontLeft.setHipAngle(90);
      legMidRight.setHipAngle(90);
      legBackLeft.setHipAngle(50);
      delay(2000);

      legFrontRight.setHipAngle(90);
      legMidLeft.setHipAngle(90);
      legBackRight.setHipAngle(90);
      delay(2000);

  }

}

      
