// Write a program to Binary search.

#include <iostream>
using namespace std;

int main() {
int a[100], n, i, target, mid, low, high;
    
cout << "Enter number of elements: ";
cin >> n;

cout << "Enter array elements: ";
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }
cout<<"Enter element to be searched: ";
cin >> target;

    low = 0;
    high = n - 1;

while(low <= high) {
        mid = (low + high) / 2;

    if(a[mid] == target) {
            cout << "Index is " << mid;
            return 0;
        }
   else if(a[mid] < target) {
            low = mid + 1;
        }
  else {
            high = mid - 1;
        }
    }

    cout << -1;
    return 0;
}
