//Write a program to Find largest and smallest element.

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main(){
int a[100],n,i;
int smallest = INT_MAX;
int largest = INT_MIN;

cout<<"Enter the no. of array elements: ";
cin>>n;

for(i=0;i<n;i++){
cout<<"Enter array element "<< i + 1 << ": ";
cin>>a[i];
}
for(i=0;i<n;i++){

    smallest = min(a[i],smallest) ;
    largest  = max(a[i],largest) ;
}

cout<<"largest element of the array is "<<largest<<endl;
cout<<"smallest element of the array is "<<smallest<<endl;

return 0;
}