// Write a program to Recursive reverse number.

#include<iostream>
using namespace std;

int reversenumber(int n, int rev = 0) {
    if (n == 0) 
    {
     return rev;   
    }
    else
    {
      return reversenumber(n / 10, rev * 10 + (n % 10));   
    }      
    
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed number = " << reversenumber(num) << endl;

    return 0;
}
