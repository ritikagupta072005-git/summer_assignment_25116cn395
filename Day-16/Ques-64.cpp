//Write a program to Remove duplicates from array.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[100], n;

 cout << "Enter the array size: ";
 cin >> n;

 cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

 vector<int> ans;

 for (int i = 0; i < n; i++) {

        bool found = false;

for (int j = 0; j < ans.size(); j++) {
     if (arr[i] == ans[j]) {
                found = true;
                break;
            }
        }

        
     if (!found) {
            ans.push_back(arr[i]);
        }
    }

 cout << "Array after removing duplicates: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}














