#include<iostream>
#include<string>
#include "circuit.h"
void Adder::halfinput()
{
    number_of_inputs=2;
    ins= new int[4];
    carry =new int[4];
    out= new int[4];
     int i,j;
     j=0;
     And_Gate a1;
     Xor_Gate x1;
      for(ins[0]=0;ins[0]<=1;ins[0]++)
		  for(ins[1]=0;ins[1]<=1;ins[1]++)
			{
                     carry[j]=a1.rinput(ins[0],ins[1]);
                     out[j]=x1.rinput(ins[0],ins[1]);
                     j++;

			}

}
void Adder::fullinput()
{
    number_of_inputs=3;
   ins=new int[3];
   carry=new int[8];
   out=new int[8];
   int i,j,k;
   j=0;
   And_Gate a1;
   Xor_Gate x1;
   Or_Gate o1;
    for(ins[0]=0;ins[0]<=1;ins[0]++)
		  for(ins[1]=0;ins[1]<=1;ins[1]++)
             for(ins[2]=0;ins[2]<=1;ins[2]++)
             {
                 out[j]=x1.rinput(ins[0],ins[1],ins[2]);
                 i=a1.rinput(ins[0],ins[1]);
                 k=x1.rinput(ins[1],ins[2]);
                 carry[j]=a1.rinput(ins[0],ins[2]);
                 carry[j]=o1.rinput(i,k,carry[j]);
                 j++;
          }
}

void Adder::halfinput(int a,int b)
{
    And_Gate a1;
    Xor_Gate x1;
    carry=new int[1];
    out= new int[1];
    carry[0]=a1.rinput(a,b);
    out[0]=x1.rinput(a,b);

}
void Adder::fullinput(int a,int b,int c)
{
    Xor_Gate x1;
    And_Gate a1;
    Or_Gate o1;
    carry=new int[1];
    out= new int[1];
    int i,k;
    out[0]=x1.rinput(a,b,c);
    i=a1.rinput(a,b);
    k=a1.rinput(b,c);
    carry[0]=a1.rinput(a,c);
    carry[0]=o1.rinput(i,k,carry[0]);
}
void Adder::displayval()const
{
        cout<<out[0]<<"  "<<carry[0];
}
void Adder::display()const
{
     int j;
    j=0;
    if(number_of_inputs==3)
    {
     for(ins[0]=0;ins[0]<=1;ins[0]++)
		  for(ins[1]=0;ins[1]<=1;ins[1]++)
			  for(ins[2]=0;ins[2]<=1;ins[2]++)
			{

                cout<<ins[0]<<" "<<ins[1]<<" "<<ins[2]<<" " <<out[j]<<" "<<carry[j]<<endl;
                j++;
			}
    }
    else
    {
        for(ins[0]=0;ins[0]<=1;ins[0]++)
		  for(ins[1]=0;ins[1]<=1;ins[1]++)
			{

                 cout<<ins[0]<<" "<<ins[1]<<" "<<out[j]<<" "<<carry[j]<<endl;
                 j++;
			}
    }

}

void Subractor::halfinput()
{
    number_of_inputs=2;
    ins= new int[4];
    carry =new int[4];
    out= new int[4];
    int i,j;
    j=0;
    And_Gate a1;
    Not_Gate n1;
    Xor_Gate x1;
    for(ins[0]=0;ins[0]<=1;ins[0]++)
        for(ins[1]=0;ins[1]<=1;ins[1]++)
        {
            carry[j]=a1.rinput(n1.invert(ins[0]),ins[1]);
            out[j]=x1.rinput(ins[0],ins[1]);
            j++;

        }


}
void Subractor::halfinput(int a,int b)
{
    And_Gate a1;
    Xor_Gate x1;
    Not_Gate n1;
    carry=new int[1];
    out= new int[1];
    carry[0]=a1.rinput(n1.invert(a),b);
    out[0]=x1.rinput(a,b);
}

void Subractor::fullinput()
{
    number_of_inputs=3;
   ins=new int[3];
   carry=new int[8];
   out=new int[8];
   int i,j,k,z;
   j=0;
   And_Gate a1;
   Xor_Gate x1;
   Or_Gate o1;
   Not_Gate n1;
    for(ins[0]=0;ins[0]<=1;ins[0]++)
		  for(ins[1]=0;ins[1]<=1;ins[1]++)
             for(ins[2]=0;ins[2]<=1;ins[2]++)
             {
                 i=a1.rinput(n1.invert(ins[0]),ins[1]);
                k=x1.rinput(ins[0],ins[1]);
                out[j]=x1.rinput(k,ins[2]);
                z=a1.rinput(n1.invert(k),ins[2]);
                carry[j]=o1.rinput(z,i);
                 j++;
          }
}

void Subractor::fullinput(int a,int b,int c)
{
    carry=new int[1];
    out=new int[1];
    int i,k,z;
    And_Gate a1;
    Xor_Gate x1;
    Or_Gate o1;
    Not_Gate n1;
    i=a1.rinput(n1.invert(a),b);
    k=x1.rinput(a,b);
    out[0]=x1.rinput(k,c);
    z=a1.rinput(n1.invert(k),c);
    carry[0]=o1.rinput(z,i);
}
void Subractor::display()const
{
     int j;
     j=0;
     if(number_of_inputs==3)
    {
     for(ins[0]=0;ins[0]<=1;ins[0]++)
		  for(ins[1]=0;ins[1]<=1;ins[1]++)
			  for(ins[2]=0;ins[2]<=1;ins[2]++)
			{

                cout<<ins[0]<<" "<<ins[1]<<" "<<ins[2]<<" " <<out[j]<<" "<<carry[j]<<endl;
                j++;
			}
    }
    else
    {
        for(ins[0]=0;ins[0]<=1;ins[0]++)
		  for(ins[1]=0;ins[1]<=1;ins[1]++)
			{

                 cout<<ins[0]<<" "<<ins[1]<<" "<<out[j]<<" "<<carry[j]<<endl;
                 j++;
			}
    }

}
void Subractor::displayval()const
{
    cout<<out[0]<<"  "<<carry[0]<<endl;
}
