#include"RealNumber.h"
using namespace std;
class IntegerNumber:public RealNumber
{
public:
  IntegerNumber(int s,double a=0):RealNumber(a){inte=s;}
  void print(){cout<<inte<<endl;}
  void add (const IntegerNumber &other)
  {
   inte=inte +other.inte;
  }
  void mul (const IntegerNumber &other)
  {
   inte=inte*other.inte;
  }
  int inte;
};
