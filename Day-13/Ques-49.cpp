//Write a program to Input and display array.

#include <iostream>
using namespace std;

int main() {
 int a[100], n, i;

cout << "Enter the no. of array elements: ";
cin >> n;

 for(i = 0; i < n; i++) {
    cout << "Enter array element " << i + 1 << ": ";
    cin >> a[i];
    }

cout << "The array elements are: ";

for(i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
