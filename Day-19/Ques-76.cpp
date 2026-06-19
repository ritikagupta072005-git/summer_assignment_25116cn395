//Write a program to Find diagonal sum.

#include <iostream>
using namespace std;

int main() {
    int a[10][10];
    int n, i, j, primarySum = 0, secondarySum = 0;

    cout << "Enter size of square matrix: ";
    cin >> n;

    cout << "Enter elements of matrix:\n";
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j) {
                primarySum = primarySum + a[i][j];
            }
            if(i + j == n - 1) {
                secondarySum = secondarySum + a[i][j];
            }
        }
    }

    cout << "Primary diagonal sum = " << primarySum << endl;
    cout << "Secondary diagonal sum = " << secondarySum << endl;

    return 0;
}