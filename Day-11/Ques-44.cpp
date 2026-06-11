//Write a program to Write function to find factorial.

#include <iostream>
using namespace std;

//function definition
int factorial(int num){
int fact =1;
for(int i=1;i<=num;i++){
   fact *= i ;
}
return fact;
}

int main(){
    int num;

cout<<"Enter a number: ";
cin>>num;

//function call
cout<<"Factorial of " <<num<< " is : "<<factorial(num)<<endl;
return 0;
}