#include"ComplexNumber.h"
#include "RealNumber.h"
#include"IntegrNumber.h"
#include<iostream>
using namespace std;
int main()
{
  RealNumber s(2);
  RealNumber b(3.3);
  s.add(b);
  s.print();
  s.mul(b);
  s.print();
  
  IntegerNumber c(3);
  IntegerNumber f(2);
  c.add(f);
  c.print();
  c.mul(f);
  c.print();
  

  ComplexNumber o(1,1);
  ComplexNumber p(1,2);
  o.add(p);
  o.print();
  o.mul(p);
  o.print();


}
