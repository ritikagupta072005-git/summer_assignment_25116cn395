// Write a program to Find common elements .

#include <iostream>
using namespace std;

int main() {
    int a[100], b[100];
    int size1, size2, i, j;

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

    cout << "Common elements: ";

    for (i = 0; i < size1; i++) {
        for (j = 0; j < size2; j++) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}