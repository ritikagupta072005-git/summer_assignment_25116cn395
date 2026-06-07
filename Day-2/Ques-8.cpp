#include<iostream>
using namespace std;

int main(){
int temp,n,digit=0,reverse=0;
cout<<"Enter the number:";
cin>>n;
temp=n;
while(n>0){
digit=n%10;
reverse=reverse*10+digit;
n=n/10;

}
if( reverse == temp){
    cout<<"the number is palindrome"<<endl;
}
else{
    cout<<"the number is not palindrome"<<endl;
}
return 0;
}
