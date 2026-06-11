// Write a program to Write function to find sum of two numbers.

#include <iostream>
using namespace std;

//function definition
int sum(int a,int b){
return a+b;
}

int main(){
    int num1,num2;

cout<<"Enter first number: ";
cin>>num1;

cout<<"Enter second number: ";
cin>>num2;

//function call
cout<<"sum of two numbers is : "<<sum(num1,num2)<<endl;

return 0;

}