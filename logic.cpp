#include<iostream>
#include<vector>
#include<string>
#include "logic.h"
#include<fstream>
#include<sstream>
#include<ctime>
#include<windows.h>
using namespace std;
void Account::login()
{
    cout<<"Enter your username:";
    cin>>username;
    cout<<"Enter the password:";
    cin>>password;
}
void Account::compare()const
{
    ifstream f;
    ofstream fi;
    f.open("username.txt");
    fi.open("wrong.txt",ios::app);
    time_t now=time(0);
    char* dt=ctime(&now);
    try
    {
        static int Count = 0;
        if(!f.fail())
        {
             string user,pass;
    while (f >> user >> pass) {
        if (user == username && pass == password) {
            cout <<"Login successfull" << endl;
            system("cls");
          Count =1;}
        }
        }
        else
            throw 'c';
        if(Count==0)
        {
            cout<<"Incorrect login credentials"<<endl;
            fi<<"Username: "<<username<<endl;
            fi<<"Password: "<<password<<endl;
            fi<<"Time of attempted login: "<<dt<<endl;
            exit(EXIT_FAILURE);
    }
    }
    catch(char c)
    {
        cout<<"Unable to open the file"<<endl;
        cout<<"Please try again..."<<endl;
    }
    f.close();
    fi.close();
}
void Account::display()const
{
    cout<<"\t\t\t\tWelcome to GATE STIMULATION\n\n";
    cout<<"Choose any one of the following below..."<<endl;
    cout<<"1.AND Gate"<<endl;
    cout<<"2.OR Gate"<<endl;
    cout<<"3.NOT Gate"<<endl;
    cout<<"4.XOR Gate"<<endl;
    cout<<"5.NAND Gate"<<endl;
    cout<<"6.NOR Gate"<<endl;
    cout<<"7.XNOR Gate"<<endl;
    cout<<"8.Adder Circuit"<<endl;
    cout<<"9.Subtractor Circuit\n"<<endl;
    cout<<"Enter your choice  :  ";

}
