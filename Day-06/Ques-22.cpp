// Write a program to Convert binary to decimal. 

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int binary,temp,decimal=0,base =1 ,rem;

    cout<<"Enter the Binary value : ";
    cin>>binary;
    temp=binary;

    while(binary>0)
    {
       rem = binary %10;
       decimal = decimal + rem*base;
       base=base*2;
       binary=binary/10;
    }

    
    cout<<"Decimal value of "<<temp<< " = " <<decimal;


   return 0;
   }
