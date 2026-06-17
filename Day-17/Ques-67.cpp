// Write a program to find Intersection of two arrays.

// Write a program to Find Intersection of Two Arrays.

#include <iostream>
using namespace std;

int main() {
    int a[100], b[100];
    int size1, size2, i, j, k;

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

    cout << "Intersection: ";

    for (i = 0; i < size1; i++) {

        bool duplicate = false;
        for (k = 0; k < i; k++) {
            if (a[i] == a[k]) {
                duplicate = true;
                break;
            }
        }

        if (duplicate)
            continue;

        for (j = 0; j < size2; j++) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}