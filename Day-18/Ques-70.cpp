//Write a program to Selection sort.


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n - 1; i++) {
        int smallestIndex = i;  

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[smallestIndex]) {
                smallestIndex = j;  
            }
        }

        if(smallestIndex != i) {
            swap(arr[i], arr[smallestIndex]);
        }
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}