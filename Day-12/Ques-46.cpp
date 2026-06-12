//Write a program to Write function for Armstrong.

#include <iostream>
#include <cmath>
using namespace std;

//function definition
int findArmstrong(int num){
    int sum = 0, digit, count = 0;

    int temp = num;

    while(temp > 0){
        temp = temp / 10;
        count++;
    }

    temp = num;

    while(temp > 0){
        digit = temp % 10;
        sum += pow(digit, count);
        temp = temp / 10;
    }

    if(num == sum)
        return 1; // Armstrong number
    else
        return 0; // Not an Armstrong number
}

int main(){
    int num;

    cout<<"Enter a number : ";
    cin>>num;

    if(findArmstrong(num)){
        cout<<num<<" is a Armstrong number."<<endl;
    }
    else{
        cout<<num<<" is not a Armstrong number."<<endl;
    }

    return 0;
}
