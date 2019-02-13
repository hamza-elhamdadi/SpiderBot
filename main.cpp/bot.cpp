#include "bot.h"

Leg::Leg(int hipServo, int kneeServo, int ankleServo){
  hip.attach(hipServo);
  knee.attach(kneeServo);
  ankle.attach(ankleServo);
}

void Leg::setHipAngle(int hipAngle)
{
  hip.write(hipAngle);
}

void Leg::setAngle(int hipAngle, int kneeAngle, int ankleAngle){
  hip.write(hipAngle);
  delay(250);
  ankle.write(ankleAngle);
  delay(250);
  knee.write(kneeAngle);
  delay(250);
}

int Leg::getAngle(char serv) const{
  switch(serv)
  {
    case 'h': return hip.read();
    case 'k': return knee.read();
    case 'a': return ankle.read();
  }
}

Body::Body(double x, double y, double z){
  xPosition = x;
  yPosition = y;
  zPosition = z;
}

void Body::setPosition(double x, double y, double z){
  xPosition = x;
  yPosition = y;
  zPosition = z;
}

double Body::getPosition(char dimension) const{
  switch(dimension)
  {
    case 'x': return xPosition;
    case 'y': return yPosition;
    case 'z': return zPosition;
  }
}
