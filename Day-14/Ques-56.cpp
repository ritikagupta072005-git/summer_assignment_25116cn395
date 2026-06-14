// Write a program to find duplicate elements in an array.

#include <iostream>
using namespace std;

int main() {
    int a[100], size, i, j;

    cout << "Enter the array size: ";
    cin >> size;

    cout << "Enter the array elements: ";
    for (i = 0; i < size; i++) {
        cin >> a[i];
    }

    cout << "Duplicate elements are: ";

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (a[i] == a[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}