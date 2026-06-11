//Write a program to Check Armstrong number. 

#include<iostream>
#include<cmath>
using namespace std;
int main ()
 {
    int num,temp,remainder,n=0;
    double result;
    
    cout<<"Enter the number : ";
    cin>>num;

     temp = num;
    while(temp !=0 )
    {
        temp/=10;
         n++;
    }
    
    temp =num;
    while(temp !=0 ){
        remainder=temp%10;
        result=result+pow(remainder,n);
        temp/=10;
    }

    if ((int)result==num)
    {
        cout<<num<<" is the Armstrong number."<<endl;
    } 
     else
     {
        cout<<num<< " is not the Armstrong number."<<endl;
     }

    return 0;
}
