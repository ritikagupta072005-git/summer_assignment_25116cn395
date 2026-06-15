// Write a program to rotate an array to the left by one position.

#include <iostream>
using namespace std;

int main() {
    int a[100], n, i, temp;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    temp = a[0];

    for (i = 0; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    a[n - 1] = temp;

    cout << "Array after left rotation: ";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}