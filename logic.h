#ifndef LOGIC_H_INCLUDED
#define LOGIC_H_INCLUDED
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
class Account
{
private:
    string username;
    string password;
public:
    void login();
    void display()const;
    void compare()const;

};

#endif // LOGIC_H_INCLUDED
