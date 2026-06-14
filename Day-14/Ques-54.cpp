// Write a program to find the frequency of an element in an array..

#include <iostream>
using namespace std;

int main() {
    int a[100], size, target, i,count=0;

    cout << "Enter the array size: ";
    cin >> size;

    cout << "Enter the array elements: ";
    for (i = 0; i < size; i++) {
        cin >> a[i] ;
    }

    cout << "Enter the target element: ";
    cin >> target;

    for (i = 0; i < size; i++) {
        if (a[i] == target) {
            count ++ ;
        }
    }

    cout<<"Frequency of the target element is "<< count <<endl;

    return 0;
}