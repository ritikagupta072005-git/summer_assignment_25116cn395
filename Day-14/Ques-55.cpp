// Write a program to find the second largest element in an array.

#include <iostream>
using namespace std;

int main() {
    int a[100], size, i;
    int largest, secondLargest;

    cout << "Enter the array size: ";
    cin >> size;

    cout << "Enter the array elements: ";
    for (i = 0; i < size; i++) {
        cin >> a[i];
    }

    largest = secondLargest = a[0];

    for (i = 1; i < size; i++) {
        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        }
        else if (a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }
    }

    cout << "Second largest element is: " << secondLargest;

    return 0;
}