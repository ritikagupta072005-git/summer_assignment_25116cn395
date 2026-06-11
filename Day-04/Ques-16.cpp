// Write a program to Print Armstrong numbers in a range.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i, num2, num1, temp, remainder, n;
    double result;

    cout << "Enter the lowest Range number : ";
    cin >> num1;
    cout << "Enter the highest Range number : ";
    cin >> num2;

    cout << "The Armstrong number bw " << num1 << " and " << num2 << " are : ";

    for (i = num1; i <= num2; i++)
    {

        n = 0;
        result = 0;

        temp = i;
        while (temp != 0)
        {
            temp /= 10;
            n++;
        }
        temp = i;
        while (temp != 0)
        {
            remainder = temp % 10;
            result = result + pow(remainder, n);
            temp /= 10;
        }
        if ((int)result == i)
        {
            cout << result << " ";
        }
    }
    return 0;
}
