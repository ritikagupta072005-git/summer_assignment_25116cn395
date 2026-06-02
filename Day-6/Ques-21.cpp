// Write a program to Convert decimal to binary. 

#include <iostream>
using namespace std;

int main ()
{
    int decimal,binary=0,place=1;

    cout<<"Enter the decimal number : ";
    cin >> decimal;
   
    while(decimal>0)
    {
        int rem = decimal % 2;
        binary = binary + rem*place;
        place *= 10;
        decimal /= 2;
    }

    cout<<"Binary = "<< binary;

    return 0;
}