#include<iostream>
#include<vector>
#include<string>
#include "logic.h"
#include "gate.h"
#include "circuit.h"
using namespace std;
void choice()
     {
         cout<<"Choose any one of the following below ..\n"<<endl;
         cout<<"1. To display 2 input truth table."<<endl;
         cout<<"2. To display 3 input truth table."<<endl;
         cout<<"3. To get output for desired 2 inputs."<<endl;
         cout<<"4. To get output for desired 3 inputs.\n"<<endl;
         cout<<"Enter your choice  :  ";
     }
     void circuit()
     {
         cout<<"Choose any one of the following below ..\n"<<endl;
         cout<<"1. To display Half adder circuit truth table."<<endl;
         cout<<"2. To display Full adder circuit truth table."<<endl;
         cout<<"3. To get output for desired Half adder circuit."<<endl;
         cout<<"4. To get output for desired Full adder circuit.\n"<<endl;
         cout<<"Enter your choice  :  ";
     }
int main()
{
   //Xnor_Gate a1;
   //a1.input();
   //a1.display();
     l1:Account l;
     l.login();
     l.compare();
     int c;
     l.display();
     cin>>c;

     switch(c)
     {
     case 1:
         {
            int i;
            choice();
            cin>>i;
            //cout<<"hello";
            And_Gate a1;
            switch(i)
            {
            case 1:{
                //And_Gate a1;
                a1.input();
                a1.display();
                break;}
            case 2:{
                //And_Gate a1;
                a1.input(3);
                a1.display();
                break;}
            case 3:
                {
                    int a,b;
                    cout<<"Enter the 1st input  : ";
                    cin>>a;
                    cout<<"Enter the 2nd input  : ";
                    cin>>b;
                    //And_Gate a1;
                    a1.input(a,b);
                    a1.displayval();
                    break;
                }
            case 4:
                {
                    int a,b,c;
                    cout<<"Enter the 1st input  : ";
                    cin>>a;
                    cout<<"Enter the 2nd input  : ";
                    cin>>b;
                    cout<<"Enter the 3rd input  : ";
                    cin>>c;
                    //And_Gate a1;
                    a1.input(a,b,c);
                    a1.displayval();
                    break;
                }
            }
            break;
         }
     case 2:
         {
            int i;
            choice();
            cin>>i;
            Or_Gate a1;
            switch(i)
            {
            case 1:{
                a1.input();
                a1.display();
                break;}
            case 2:{
                a1.input(3);
                a1.display();
                break;}
            case 3:
                {
                    int a,b;
                    cout<<"Enter the 1st input  : ";
                    cin>>a;
                    cout<<"Enter the 2nd input  : ";
                    cin>>b;
                    a1.input(a,b);
                    a1.displayval();
                    break;
                }
            case 4:
                {
                    int a,b,c;
                    cout<<"Enter the 1st input  : ";
                    cin>>a;
                    cout<<"Enter the 2nd input  : ";
                    cin>>b;
                    cout<<"Enter the 3rd input  : ";
                    cin>>c;
                    a1.input(a,b,c);
                    a1.displayval();
                    break;
                }
            }
            break;
         }
     case 3:
         {
             int i;
             cout<<"Enter any one of the following below ...\n"<<endl;
             cout<<"1. To display  gate truth table."<<endl;
             cout<<"2. To get output for desired input.\n"<<endl;
             cout<<"Enter your choice  :  ";
            cin>>i;
            Not_Gate a1;
            switch(i)
            {
            case 1:{
                a1.input();
                a1.display();
                break;}
            case 2:{
                int a;
                cout<<"Enter your input : ";
                cin>>a;
                a1.input(a);
                a1.displayval();
                break;}
            }
            break;
         }
     case 4:
        {
            int i;
            choice();
            cin>>i;
            Xor_Gate a1;
            switch(i)
            {
            case 1:{
                a1.input();
                a1.display();
                break;}
            case 2:
                a1.input(3);
                a1.display();
                break;
            case 3:
                {
                    int a,b;
                    cout<<"Enter the 1st input  : ";
                    cin>>a;
                    cout<<"Enter the 2nd input  : ";
                    cin>>b;
                    a1.input(a,b);
                    a1.displayval();
                    break;
                }
            case 4:
                {
                    int a,b,c;
                    cout<<"Enter the 1st input  : ";
                    cin>>a;
                    cout<<"Enter the 2nd input  : ";
                    cin>>b;
                    cout<<"Enter the 3rd input  : ";
                    cin>>c;
                    a1.input(a,b,c);
                    a1.displayval();
                    break;
                }
            }
            break;
        }
     case 5:
        {
            int i;
            choice();
            cin>>i;
            Nand_Gate a2;
            switch(i)
            {
            case 1:{
                a2.input();
                a2.display();
                break;}
            case 2:{
                a2.input(3);
                a2.display();
                break;}
            case 3:
                {
                    int a,b;
                    cout<<"Enter the 1st input  : ";
                    cin>>a;
                    cout<<"Enter the 2nd input  : ";
                    cin>>b;
                    a2.input(a,b);
                    a2.displayval();
                    break;
                }
            case 4:
                {
                    int a,b,c;
                    cout<<"Enter the 1st input  : ";
                    cin>>a;
                    cout<<"Enter the 2nd input  : ";
                    cin>>b;
                    cout<<"Enter the 3rd input  : ";
                    cin>>c;
                    a2.input(a,b,c);
                    a2.displayval();
                    break;
                }
            }
            break;
        }
      case 6:
        {
            int i;
            choice();
            cin>>i;
            Nor_Gate a1;
            switch(i)
            {
            case 1:
                a1.ninput();
                a1.Gate::display();
                break;
            case 2:
                a1.ninput(3);
                a1.Gate::display();
                break;
            case 3:
                {
                    int a,b;
                    cout<<"Enter the 1st input  : ";
                    cin>>a;
                    cout<<"Enter the 2nd input  : ";
                    cin>>b;
                   a1.ninput(a,b);
                    a1.Gate::displayval();
                    break;
                }
            case 4:
                {
                    int a,b,c;
                    cout<<"Enter the 1st input  : ";
                    cin>>a;
                    cout<<"Enter the 2nd input  : ";
                    cin>>b;
                    cout<<"Enter the 3rd input  : ";
                    cin>>c;
                    a1.ninput(a,b,c);
                    a1.Gate::displayval();
                    break;
                }
            }
            break;
        }
     case 7:
        {
            int i;
            choice();
            cin>>i;
            Xnor_Gate a1;
            switch(i)
            {
            case 1:
                a1.input();
                a1.Gate::display();
                break;
            case 2:
                a1.input(3);
                a1.Gate::display();
                break;
            case 3:
                {
                    int a,b;
                    cout<<"Enter the 1st input  : ";
                    cin>>a;
                    cout<<"Enter the 2nd input  : ";
                    cin>>b;
                    a1.input(a,b);
                    a1.Gate::displayval();
                    break;
                }
            case 4:
                {
                    int a,b,c;
                    cout<<"Enter the 1st input  : ";
                    cin>>a;
                    cout<<"Enter the 2nd input  : ";
                    cin>>b;
                    cout<<"Enter the 3rd input  : ";
                    cin>>c;
                    a1.input(a,b,c);
                    a1.Gate::displayval();
                    break;
                }
            }
            break;
        }
     case 8:
        {
            int i;
            circuit();
            cin>>i;
            Adder a1;
            switch(i)
            {
            case 1:
                a1.halfinput();
                a1.display();
                break;
            case 2:
                a1.fullinput();
                a1.display();
                break;
            case 3:
                {
                    int a,b;
                    cout<<"Enter the 1st input  : ";
                    cin>>a;
                    cout<<"Enter the 2nd input  : ";
                    cin>>b;
                    a1.halfinput(a,b);
                    a1.displayval();
                    break;
                }
            case 4:
                {
                    int a,b,c;
                    cout<<"Enter the 1st input  : ";
                    cin>>a;
                    cout<<"Enter the 2nd input  : ";
                    cin>>b;
                    cout<<"Enter the carry      : ";
                    cin>>c;
                    a1.fullinput(a,b,c);
                    a1.displayval();
                    break;
                }
            }
            break;
        }
     case 9:
        {
            int i;
            circuit();
            cin>>i;
            Subractor a1;
            switch(i)
            {
            case 1:
                a1.halfinput();
                a1.display();
                break;
            case 2:
                a1.fullinput();
                a1.display();
                break;
            case 3:
                {
                    int a,b;
                    cout<<"Enter the 1st input  : ";
                    cin>>a;
                    cout<<"Enter the 2nd input  : ";
                    cin>>b;
                    a1.halfinput(a,b);
                    a1.displayval();
                    break;
                }
            case 4:
                {
                    int a,b,c;
                    cout<<"Enter the 1st input  : ";
                    cin>>a;
                    cout<<"Enter the 2nd input  : ";
                    cin>>b;
                    cout<<"Enter the carry      : ";
                    cin>>c;
                    a1.fullinput(a,b,c);
                    a1.displayval();
                    break;
                }
            }
            break;
        }
        default:
            {
                cout<<"Invalid input of choice. Please enter a valid choice"<<endl;
                goto l1;
            }
     }
}
