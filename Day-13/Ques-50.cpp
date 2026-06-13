//Write a program to Find sum and average of array.

#include <iostream>
using namespace std;
int main(){
int a[100],n,i,sum=0;
float avg;

cout<<"Enter the no. of array elements: ";
cin>>n;

for(i=0;i<n;i++){
cout<<"Enter array element "<< i + 1 << ": ";
cin>>a[i];
}

for(i=0;i<n;i++){
sum  += a[i];
}
cout<<"Sum of array elements: "<<sum<<endl;
avg = (float)sum/n ;
cout<<"Average of array elements: "<<avg<<endl;

return 0;
}

