// Write a program to Print character triangle. 
// A 
// AB 
// ABC 
// ABCD 
// ABCDE 

#include <iostream>
using namespace std;

int main() 
{
    int rows,i,j;
    char ch;
    cout <<"Enter number of rows : ";
    cin>>rows;

    for(i = 1;i <= rows;i++) 
    {
         ch = 'A';
        for(j = 1;j <= i;j++) 
        {
            cout<<ch;
            ch++;
        }
        cout <<endl;
    }
    return 0;
}
