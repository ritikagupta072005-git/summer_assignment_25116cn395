// Write a program to move all zeroes to the end of an array.

#include <iostream>
using namespace std;

int main() {
    int a[100], n, i, j = 0;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
       for(i = 0 ;i < n ; i ++){
        if (a[i] != 0) {
            a[j] = a[i];
            j++;
        }
    }

    while (j < n) {
        a[j] = 0;
        j++;
    }

    cout << "Array after moving zeroes to the end: ";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}