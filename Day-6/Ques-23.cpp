// Write a program to Count set bits in a number. 

#include<iostream>
using namespace std;
 int main()
 {
    int n , remainder , digits = 0 , setbit = 0;
    cout << "Enter the number in binary digit : ";
    cin >> n;

    while( n > 0)
    {
      remainder = n % 10;
      digits++;
      n /= 10;
      if( remainder == 1 )
      {
         setbit++;
      }

    }

    cout << "Number of set bits = " << setbit <<endl;

    return 0;

 }