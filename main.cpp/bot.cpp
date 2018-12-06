#include "bot.h"

Leg::Leg(int hip, int knee, int ankle){
  joints.at(0).attach(hip);
  joints.at(1).attach(knee);
  joints.at(2).attach(ankle);
}

void Leg::setAngle(int hipAngle, int kneeAngle, int ankleAngle){
  joints.at(0).write(hipAngle);
  joints.at(0).write(kneeAngle);
  joints.at(0).write(ankleAngle);
}

vector<int> getAngle() const{
  vector<int> angles;
  angles.push_back(joints.at(0).read());
  angles.push_back(joints.at(1).read());
  angles.push_back(joints.at(2).read());
  return angles;
}

Body::Body(double x, double y, double z){
  position.at(0) = x;
  position.at(1) = y;
  position.at(2) = z;
}

void Body::setPosition(double x, double y, double z){
  position.at(0) = x;
  position.at(1) = y;
  position.at(2) = z;
}

vector<double> Body::getPosition() const{
  return position;
}
