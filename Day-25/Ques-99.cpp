// Write a program to Sort names alphabetically. 

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
int n;
cout<<"Enter number of names : ";
cin>>n;

string names[100]; // assuming max 100 names
cout<<"Enter names : \n";
for(int i=0;i<n;i++){
    cin>>names[i];
}

sort(names,names+n);
cout<<"\nNames in alphabetical order : \n";
for(int i=0;i<n;i++) { 
    cout<<names[i]<<endl;
}

return 0;
}