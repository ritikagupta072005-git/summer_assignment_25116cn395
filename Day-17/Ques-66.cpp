// Write a program to find Union of arrays.

#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], c[200];
    int size1, size2, i, j, k = 0;
    bool found;

 cout << "Enter size of first array: ";
 cin >> size1;

 cout << "Enter elements of first array: ";
    for (i = 0; i < size1; i++) {
        cin >> a[i];

        found = false;
        for (j = 0; j < k; j++) {
            if (a[i] == c[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            c[k++] = a[i];
        }
    }
 cout << "Enter size of second array: ";
 cin >> size2;

 cout << "Enter elements of second array: ";
    for (i = 0; i < size2; i++) {
        cin >> b[i];

        found = false;
        for (j = 0; j < k; j++) {
            if (b[i] == c[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            c[k++] = b[i];
        }
    }
 cout << "Union of arrays: ";
    for (i = 0; i < k; i++) {
        cout << c[i] << " ";
    }
    return 0;
}
