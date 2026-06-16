// Write a program to find the maximum frequency element in an array.

#include <iostream>
using namespace std;

int main() {
    int a[100], n, i, j;
    int count, maxCount = 0, maxElement;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (i = 0; i < n; i++) {
        count = 1;

        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            maxElement = a[i];
        }
    }

    cout << "Maximum frequency element = " << maxElement << endl;
    cout << "Frequency = " << maxCount;

    return 0;
}