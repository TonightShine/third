#ifndef REALNUMBER_H
#define REALNUMBER_H
#include"AbstractNumber.h"
#include<iostream>
class RealNumber:public AbstractNumber
{
 public:
 RealNumber(double s):number(s){}
 void print() {std::cout<< number<<std::endl;}
 void add(const RealNumber &other)
 {
  number= number+other.number;
 }
  void mul(const RealNumber &other)
 {
   number= number*other.number;
 }
 double number;

};
#endif

