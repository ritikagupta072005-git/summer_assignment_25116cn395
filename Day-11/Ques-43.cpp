//Write a program to Write function to check prime.

#include <iostream>
using namespace std;

//function definition
int findprime(int num){

for(int i=2;i<=num-1;i++){
    if(num%i == 0)
    return 0 ;//Non prime
} 
return 1; //prime
}

int main(){
int num;
cout<<"Enter the number : ";
cin>>num;

//function call
if(findprime(num))
  cout<<num<<" is a prime number."<<endl;
else
   cout<<num<<" is not a prime number."<<endl;

   return 0;
}