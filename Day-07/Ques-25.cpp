// Write a program to Recursive factorial.


#include<iostream>
using namespace std;

int factorial(int m)
{
    if ( m == 0)
    {
        return 1;
    } 
    else 
    {
        return (m*factorial(m-1));
    }
}
int main()
{
    int n,fact;
   cout<<"Enter the number : ";
   cin>>n;
    
   fact = factorial(n);
   cout<<"Factorial = "<<fact<<endl;

   return 0;

}
