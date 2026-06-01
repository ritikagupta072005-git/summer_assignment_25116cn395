// Write a program to Check strong number. 

#include <iostream>
using namespace std;

int main()
{
    int n,temp,digit,sum=0,fact=1;
    cout<<"Enter the number : ";
    cin>>n;

    temp=n;

    while(temp>0)
    {
       digit=temp%10;
       fact=1;

          for(int i = 1; i<=digit;i++)
          {     
            fact=fact*i;
          }
    
       sum=sum+fact;
       temp=temp/10;
    }

    cout<<"Sum of factorial of digits = "<<sum<<endl;

    if (sum == n )
    {
        cout<<n<<" is a strong number ."<<endl;
    }
    else
    {
    cout<<n<<" is not a strong number ."<<endl;
    } 

    return 0;
}