#include <Servo.h>
#include "Arduino.h"

using namespace std;

class Leg{
  private:
     Servo hip;
     Servo knee;
     Servo ankle;
  public:
     Leg(int,int,int);
     void setAngle(int,int,int);
     void setHipAngle(int);
     int getAngle(char serv) const;
};

class Body{
  private:
     double xPosition;
     double yPosition;
     double zPosition;
  public:
     Body(double,double,double);
     void setPosition(double,double,double);
     double getPosition(char dimension) const;
};
