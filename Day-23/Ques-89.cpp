//Write a program to Find first non-repeating character.

#include<iostream>
#include<string>
using namespace std;
int main()
{
string str;

cout<<"Enter string: ";
getline(cin,str);

int freq[256]={0};

for(int i=0;i<str.length();i++)
        freq[str[i]]++;

for(int i=0;i<str.length();i++)
    {
    if(freq[str[i]]==1)
     {
        cout<<"First non repeating character : "<<str[i];
        return 0;
     }
    }

cout<<"No non repeating character";

    return 0;
}