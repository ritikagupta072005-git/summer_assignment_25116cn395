//Write a program to Write function for palindrome.

#include <iostream>
using namespace std;

//function definition
int findpalindrome(int num){
int temp,rev=0,digit ;
temp = num ;
while(num>0){
digit = num % 10;
rev = (rev * 10) + digit ;
num = num/10 ;
}
if(rev == temp)
    return 1; // palindrome number
else
    return 0; // not a palindrome number
}

int main(){
int num;
cout<<"Enter a number : ";
cin>>num;

//function call
if(findpalindrome(num)){
    cout<<num<<" is a palindrome number."<<endl;
}
else{
    cout<<num<<" is  not a palindrome number."<<endl;
}
return 0;
}