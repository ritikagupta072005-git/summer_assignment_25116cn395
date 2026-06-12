// Write a program to Print number triangle. 
// 1 
// 12 
// 123 
// 1234 
// 12345

#include <iostream>
using namespace std;

int main()
 {
    int rows,i,j;
    cout<<"Enter number of rows : ";
    cin>> rows;

    for(i = 1;i <= rows;i++) 
    {
        for(j = 1;j <= i;j++) 
        {
            cout <<j;
        }
        cout <<endl;
    }
    return 0;
}
