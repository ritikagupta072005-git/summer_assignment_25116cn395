//Write a program to Find pair with given sum.

#include <iostream>
using namespace std;

int main() {
    int arr[100], n, target;

    cout << "Enter the array size: ";
    cin >> n;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    bool found = false;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            if (arr[i] + arr[j] == target) {
                cout << "Pair found: " << arr[i] << " " << arr[j];
                found = true;
                break;   
            }
        }

        if (found)
            break;      
    }

    if (!found) {
        cout << "No pair found";
    }

    return 0;
}
