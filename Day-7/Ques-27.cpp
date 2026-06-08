// Write a program to Recursive sum of digits. 

#include<iostream>
using namespace std;

int sumofdigit(int m)
{ 
    if ( m == 0 )
    {
        return 0;
    }
    else 
    {
        return (m % 10 )+sumofdigit(m / 10);
    }
}

int main()
{
    int n;
  cout << "Enter the number : ";
  cin >> n;

  cout <<"Sum of digits = "<<sumofdigit(n);
  return 0;

}