// Write a program to Check perfect number.

#include <iostream>
using namespace std;

int main()
{
    int num , i , sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    
    for ( i = 1; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    if (sum == num && num > 0)
    {
        cout << num << " is a perfect number." << endl;
    }
    else
    {
        cout << num << " is not a perfect number." << endl;
    }

    return 0;
}
