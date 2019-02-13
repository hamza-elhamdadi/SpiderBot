#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <ir_Lego_PF_BitStreamEncoder.h>


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

#define remotePin 50

IRrecv irrecv(remotePin);
decode_results results;



void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  
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
  legBackRight.setAngle(90, 110, 170);
  legBackLeft.setAngle(50,110, 180);
  
  while(true)
  {
      if(irrecv.decode(&results))
      {
        if(results.value == 16753245)
        {
          legFrontRight.setAngle(90, 130, 140);
          legFrontLeft.setAngle(90, 80, 180);
          legMidRight.setAngle(90, 105, 170);
          legMidLeft.setAngle(90, 110, 170);
          legBackRight.setAngle(90, 110, 180);
          legBackLeft.setAngle(50, 110, 170);
        }
        else if(results.value == 16736925)
        {
          legFrontRight.setAngle(90, 80, 40);
          legFrontLeft.setAngle(90, 30, 80);
          legMidRight.setAngle(90, 55, 70);
          legMidLeft.setAngle(90, 60, 70);
          legBackRight.setAngle(90, 40, 70);
          legBackLeft.setAngle(50, 30, 0);
        }
        else if(results.value == 16769565)
        {
          legFrontRight.setAngle(60, 130, 140);
          legFrontLeft.setAngle(120, 80, 180);
          legMidRight.setAngle(60, 105, 170);
          legMidLeft.setAngle(120, 110, 170);
          legBackRight.setAngle(60, 110, 180);
          legBackLeft.setAngle(80, 110, 170);
        }
        else if(results.value == 16720605)
        {
          legFrontRight.setAngle(120, 50, 90);
          legFrontLeft.setAngle(60, 0, 130);
          legMidRight.setAngle(120, 25, 120);
          legMidLeft.setAngle(60, 20, 120);
          legBackRight.setAngle(120, 20, 130);
          legBackLeft.setAngle(20, 20, 120);
        }
        irrecv.resume();     
      }
      /*legFrontLeft.setHipAngle(75);
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
      delay(2000);*/

  }

}

//Button 0: 16750695
//Button 1: 16753245
//Button 2: 16736925
//Button 3: 16769565
//Button 4: 16720605


      
