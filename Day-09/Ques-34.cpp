// Write a program to Print reverse number 
// triangle. 
 
// 12345 
// 1234 
// 123 
// 12 
// 1 

#include<iostream>
using namespace std;

int main() 
{
    int rows,i,j;
    cout<<"Enter number of rows : ";
    cin>>rows;

    for(i = rows;i >= 1;i--) 
    {
        for(j = 1;j <= i;j++) 
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
