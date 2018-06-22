#include"AbstractNumber.h"
#include<iostream>
class ComplexNumber:public AbstractNumber
{
 public:
    ComplexNumber(double a,double b) {real=a;imag=b;}
    void print(){std::cout<<real<<"+"<<imag<<"i"<<std::endl;}
    void add(const ComplexNumber &other)
    { 
      real=other.real+real;
      imag=other.imag+imag;
    }
    void mul(const ComplexNumber &other)
    {
      ComplexNumber f(1,1);
     f.real=other.real*real-imag*other.imag;
     f.imag=real*other.imag+imag*other.real;
     real=f.real;
     imag=f.imag;
    }
    
    double real;
    double imag;
    

}; 
