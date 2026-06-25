// Write a program to Find common characters in strings. 

#include<iostream>
#include<string>
using namespace std;
int main(){
string str1,str2;

cout<<"Enter first string : ";
cin>>str1;

cout<<"Enter second string: ";
cin>>str2;

int freq1[256]={0}; // frequency of characters in str1
int freq2[256]={0}; // frequency of characters in str2

for(char c : str1){
    freq1[(unsigned char)c] = 1; 
} 
for(char c : str2){
    freq2[(unsigned char)c] = 1;  
} 

cout<<"Common characters : ";
for(int i=0;i<256;i++){
    if(freq1[i] && freq2[i]){
        cout<<(char)i<<" ";
    }
}
cout<<endl;
return 0;
}