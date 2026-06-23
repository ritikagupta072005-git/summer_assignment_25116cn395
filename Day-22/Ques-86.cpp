//Write a program to Count words in a sentence.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    
    int n= str.length();

    int count = 0;
    bool isword=false;

    for(char ch : str)
    {  
        if(ch !=' ' && !isword )  
        {
            isword=true;
            count++;  
        }
        else if(ch == ' ') 
        {
            isword = false;
        }
    }
    
    cout<<"Number of words = "<<count<<endl;
    return 0;
}
