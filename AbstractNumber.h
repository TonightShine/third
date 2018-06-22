
#ifndef ABSTRACTNUMBER_H
#define ABSTRACTNUMBER_H

class AbstractNumber
{
 virtual void print()=0;
   void add(const AbstractNumber &other);
  void mul(const AbstractNumber &other);
};
#endif
