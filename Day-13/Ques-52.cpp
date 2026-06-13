//Write a program to Count even and odd elements.

#include <iostream>
using namespace std;

int main() {
int a[100], n, i,ceven = 0 ,codd = 0;

 cout << "Enter the no. of array elements: ";
 cin >> n;

 for(i = 0; i < n; i++) {
    cout << "Enter array element " << i + 1 << ": ";
     cin >> a[i];
 }

for(i = 0; i < n; i++) {
  if(a[i]%2 == 0)
     ceven++;
  else
     codd++;
}
cout<<"Number of even elements: "<<ceven <<endl;
cout<<"Number of odd elements: "<<codd <<endl;


return 0;
}
