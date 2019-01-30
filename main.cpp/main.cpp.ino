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

  legFrontRight.setAngle(90, 130, 140);
  legFrontLeft.setAngle(90, 80, 180);
  legMidRight.setAngle(90, 105, 170);
  legMidLeft.setAngle(90, 110, 170);
  legBackRight.setAngle(90, 90, 170);
  legBackLeft.setAngle(50, 80, 100);
  
  while(true)
  {
      
      legFrontLeft.setAngle(70, 80, 180);
      legMidRight.setAngle(70, 105, 170);
      legBackLeft.setAngle(30, 80, 100);

      legFrontRight.setAngle(110, 130, 140);
      legMidLeft.setAngle(110, 110, 170);
      legBackRight.setAngle(110, 90, 170);

      legFrontRight.setAngle(90, 130, 140);
      legMidLeft.setAngle(90, 110, 170);
      legBackRight.setAngle(90, 90, 170);

      legFrontLeft.setAngle(90, 80, 180);
      legMidRight.setAngle(90, 105, 170);
      legBackLeft.setAngle(50, 80, 100);

      

  }

}

      
