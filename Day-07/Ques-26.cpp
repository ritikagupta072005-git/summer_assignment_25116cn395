// Write a program to Recursive Fibonacci. 

#include<iostream>
using namespace std;

int fibonacci(int m)
{
   if ( m == 0 )
   {
      return 0;
   }
   else if ( m == 1)
   {
      return 1;
   }
   else 
   {
      return fibonacci(m-1)+fibonacci(m-2);
   }
}

int main()
{
   int n ,i;
   cout <<"Enter number of terms of fibonacci series : ";
   cin>>n;

   cout<<"Fibonacci series upto "<<n<<" th terms = ";
   
  for( i = 0; i < n; i++)
  {
     cout<<fibonacci(i)<<" ";
  }
  cout<<endl;
  return 0;
}
