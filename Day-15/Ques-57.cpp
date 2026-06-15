//Write a program to Reverse array.

#include <iostream>
using namespace std;

int main() {
    int a[100], size,i,j,temp;

    cout << "Enter the array size: ";
    cin >> size;

    cout << "Enter the array elements: ";
    for (i = 0; i < size; i++) {
        cin >> a[i] ;
    }

   for(i=0,j = size - 1; i<j ;i++,j--){
      temp = a[i];
      a[i] = a[j];
      a[j] = temp ;
   }
   cout<<"The reversed array is = " ;
   for (i = 0; i < size; i++) {
        cout<<a[i]<<" ";
    }
   return 0;

}