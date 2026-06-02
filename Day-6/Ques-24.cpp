// Write a program to Find x^n without pow().

#include <iostream>
using namespace std;

 int main ()
 {
    int x, n ,i, product=1;

    cout<<"Enter the number : ";
    cin>>x;

    cout <<"Enter the power : ";
    cin>>n;

    for( i = 1; i <=n ; i++)
    {
        product=product*x;
    }
    
    cout<<x<<" raised to power "<<n<<" = "<<product<<endl;

    return 0;
 }