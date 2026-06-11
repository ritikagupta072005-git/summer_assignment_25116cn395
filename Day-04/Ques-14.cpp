//write a program to find nth fibonacci term.

#include<iostream>
using namespace std;
int main ()
 {
     int n,a=0,b=1,i=1,c;
    cout<<"Enter the term  : ";
    cin>>n;

    cout<<"Fibonacci series : ";
    
    cout<<a<<" "<<b<<" ";
    
     while(i <= n-2)
     {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        i++;
     }
    if(n==1)
    {
      cout<<"\n"<<0<<" is the "<<n<<"st term of Fibonacci series."<<endl;  
    }
     else if(n==2)
     {
        cout<<"\n"<<1<<" is the "<<n<<"nd term of Fibonacci series."<<endl;

     }
     else if (n==3)
     {
        cout<<"\n"<<c<<" is the "<<n<<"rd term of Fibonacci series."<<endl;
     }
     else
     {

       cout<<"\n"<<c<<" is the "<<n<<"th term of Fibonacci series."<<endl;
     }
     
    return 0;
}



