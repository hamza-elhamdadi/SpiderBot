#include <StandardCplusplus.h>
#include <vector>

using namespace std;

class Leg{
  private:
     vector<Servo> joints(3);
  public:
     Leg(int,int,int);
     void setAngle(int,int,int);
     vector<int> getAngle() const;
}

class Body{
  private:
     vector<double> position;
  public:
     Body(double,double,double);
     void setPosition(double,double,double);
     vector<double> getPosition() const;
}

class Spider(){
  private:
     Body body;
     vector<Leg*> legs;
  public:
     Spider(vector<Leg*>,Body);
     
}
