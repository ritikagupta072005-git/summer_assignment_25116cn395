//Write a program to Write function for Fibonacci.

#include <iostream>
using namespace std;

//function definition
void fibonacci(int num){
    int a = 0, b = 1, c;

    cout << a << " " << b << " ";

    for(int i = 3; i <= num; i++){
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

int main(){
    int num;

    cout << "Enter number of terms : ";
    cin >> num;

    //function call
    fibonacci(num);

    return 0;
}
