//Write a program to Subtract matrices.

#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], diff[10][10];
    int r, c, i, j;

    cout<<"Enter the no. of rows and column for matrix A and B : ";
    cin >> r >> c;

    cout<<"Enter elements of matrix A:\n";
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    cout<<"Enter elements of matrix B:\n";
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cin >> b[i][j];
        }
    }

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << "Difference of matrices is:" << endl;

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}