// Write a program to Sort words by length.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//Comparator function to sort by length.
bool compareLength(const string &a,const string &b){
    return a.length()<b.length();
}

int main(){
int n;
cout<<"Enter number of words : ";
cin>>n;

string words[100]; // assuming max 100 words
cout<<"Enter words : \n";
for(int i=0;i<n;i++){
    cin>>words[i];
}

sort(words,words+n,compareLength);
cout<<"\nWords sorted by length : \n";
for(int i=0;i<n;i++){
    cout<<words[i]<<endl;
}

return 0;
}