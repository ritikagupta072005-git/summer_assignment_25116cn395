// Write a program to Merge arrays.

#include <iostream>
using namespace std;
int main() {
    int a[100], b[100], c[200];
    int size1, size2, i;

    cout << "Enter size of first array: ";
    cin >> size1;

    cout << "Enter elements of first array: ";
    for (i = 0; i < size1; i++) {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> size2;

    cout << "Enter elements of second array: ";
    for (i = 0; i < size2; i++) {
        cin >> b[i];
    }

    for (i = 0; i < size1; i++) {
        c[i] = a[i];
    }

    for (i = 0; i < size2; i++) {
        c[size1 + i] = b[i];
    }

    cout << "Merged array: ";
    for (i = 0; i < size1 + size2; i++) {
        cout << c[i] << " ";
    }

    return 0;
}
