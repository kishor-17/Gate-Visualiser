#ifndef CIRCUIT_H_INCLUDED
#define CIRCUIT_H_INCLUDED
#include "gate.h"
class Adder:public Gate
{
  protected:
      int *carry;
  public:
      void halfinput();
      void fullinput();
      void display()const;
      void halfinput(int a,int b);
      void fullinput(int a,int,int c);
      void displayval()const;
};

class Subractor:public Gate
{
  protected:
      int *carry;
  public:
      void halfinput();
      void fullinput();
      void display()const;
      void halfinput(int a,int b);
      void fullinput(int a,int,int c);
      void displayval()const;
};
#endif // CIRCUIT_H_INCLUDED
