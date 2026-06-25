// Write a program to Merge two sorted arrays. 

#include<iostream>
#include<algorithm> 
using namespace std;
int main() {
int n1,n2;

cout<<"Enter size of first array : ";
cin>>n1;

int arr1[n1];
cout<<"Enter elements of first array : \n";
for(int i=0;i<n1;i++){
    cin>>arr1[i];
}

cout<<"Enter size of second array : ";
cin>>n2;

int arr2[n2];
cout<<"Enter elements of second array: \n";
for(int i=0;i<n2;i++){
    cin>>arr2[i];
}

int merged[n1 + n2];
for(int i=0;i<n1;i++){
    merged[i] = arr1[i]; 
} 
for(int j=0;j<n2;j++){
    merged[n1+j] = arr2[j];
}
 
sort(merged, merged + n1 + n2); //sort(start pointer(&merged[0]), endpointer(&merged[n1+n2]))

cout<<"Merged sorted array : \n";
for(int x=0;x<n1+n2;x++) {
    cout<<merged[x]<<" ";
}
cout<<endl;
return 0;
}