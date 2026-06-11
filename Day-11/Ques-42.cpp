// Write a program to Write function to find maximum. 

#include <iostream>
using namespace std;

//function definition
int findmax(int a,int b){
if(a>b)
    return a;
else
    return b;
} 

int main(){
    int num1,num2;

cout<<"Enter first number: ";
cin>>num1;

cout<<"Enter second number: ";
cin>>num2;

//function call
cout<<"maxium of two numbers is : "<<findmax(num1,num2)<<endl;

return 0;

}