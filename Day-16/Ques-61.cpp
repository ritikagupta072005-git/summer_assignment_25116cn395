//Write a program to Find missing number in array.
//Range: 0 to n

#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

 cout << "Enter the value of n: ";
 cin >> n;

 cout << "Enter " << n << " array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i <= n; i++) {

        bool found = false;
    
    for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                found = true;
                break;
            }
        }
           if (!found) {
            cout << "Missing number is: " << i;
            break;
        }
    }
    return 0;
}