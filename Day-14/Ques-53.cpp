// Write a program to perform Linear Search.

#include <iostream>
using namespace std;

int main() {
    int a[100], size, target, i;

    cout << "Enter the array size: ";
    cin >> size;

    cout << "Enter the array elements: ";
    for (i = 0; i < size; i++) {
        cin >> a[i] ;
    }

    cout << "Enter the target element: ";
    cin >> target;

    for (i = 0; i < size; i++) {
        if (a[i] == target) {
            cout << "Element found at index " << i;
            break;
        }
    }

    if (i == size) {
        cout << "Element not found";
    }

    return 0;
}