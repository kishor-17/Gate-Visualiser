#ifndef GATE_H_INCLUDED
#define GATE_H_INCLUDED
#include "logic.h"
#include "input.h"
#include "exception.h"
class Logic;
class Gate
{
protected:
    Gate_type label;
    int value;
    int *ins;
    int *out;
    int number_of_inputs;
public:
    virtual void display()const;
    void displayval()const;
};
class And_Gate:public Gate
{
public:
   void input(int number_of_gate_inputs);
   void input();
   void input(int a,int b,int c);
   void input(int a,int b);
   int rinput(int a,int b);
};
class Or_Gate:public Gate
{
public:
    void input(int number_of_gate_inputs);
    void input();
    void input(int a,int b,int c);
    void input(int a,int b);
    int rinput(int a,int b,int c);
    int rinput(int a,int b);
};
class Xor_Gate:public Gate
{
public:
    void input(int number_of_gate_inputs);
    void input();
    void input(int a,int b,int c);
    void input(int a,int b);
    int rinput(int a,int b);
    int rinput(int a,int b,int c);
};
class Not_Gate:public Gate
{
public:
    void input(int a);
    void input();
    int invert(int a);
    void display()const;
    void displayval()const;
};
class Nor_Gate:public Gate
{
public:
    void ninput(int number_of_gate_inputs);
    void ninput();
    void ninput(int a,int b,int c);
    void ninput(int a,int b);
};
class Xnor_Gate:public Gate
{
public:
    void input(int number_of_gate_inputs);
    void input();
    void input(int a,int b,int c);
    void input(int a,int b);

};
class Nand_Gate:public Gate
{
public:
    void input(int number_of_gate_inputs);
    void input();
    void input(int a,int b,int c);
    void input(int a,int b);

};
#endif // GATE_H_INCLUDED
