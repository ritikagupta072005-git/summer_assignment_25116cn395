// Write a program to rotate an array to the right by one position.

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
    temp = a[n - 1];

    for (i = n - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }

    a[0] = temp;

    cout << "Array after right rotation: ";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}