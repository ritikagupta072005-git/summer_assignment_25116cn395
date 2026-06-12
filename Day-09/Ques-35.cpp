// Write a program to Print repeated character 
// pattern. 
// A 
// BB 
// CCC 
// DDDD 
// EEEEE 

#include <iostream>
using namespace std;

int main() 
{
    int rows,i,j;
    char ch;
    cout<<"Enter number of rows : ";
    cin>>rows;

     ch = 'A';  

    for(i = 1;i <= rows;i++) 
    {
        for(j = 1;j <= i;j++) 
        {
            cout<<ch;
        }
        cout<<endl;
        ch++; 
    }

    return 0;
}
