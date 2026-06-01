//Write a program to Print factors of a number.

#include <iostream>
using namespace std;

int main()
{
    int n , i;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<"Factors of number "<<n<<" are = ";

    for( i = 1; i <= n; i++)
    {
        if (n % i ==0)
        {
            cout<<i<<" ";
        }

    }

    cout<<endl;

    return 0;

}