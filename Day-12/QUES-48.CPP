//Write a program to Write function for Perfect Number.

#include <iostream>
using namespace std;

//function definition
int findPerfect(int num){
    int sum = 0;

    for(int i = 1; i < num; i++){
        if(num % i == 0){
            sum += i;
        }
    }

    if(sum == num)
        return 1; // Perfect number
    else
        return 0; // Not a Perfect number
}

int main(){
    int num;

    cout<<"Enter a number : ";
    cin>>num;

    //function call
    if(findPerfect(num)){
        cout<<num<<" is a Perfect number."<<endl;
    }
    else{
        cout<<num<<" is not a Perfect number."<<endl;
    }

    return 0;
}