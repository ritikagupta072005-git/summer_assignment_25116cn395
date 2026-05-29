#include<iostream>
using namespace std;

int main(){
int i,n,digit=0,reverse=0;
cout<<"Enter the number:";
cin>>n;
i=n;
while(i>0){
digit=i%10;
reverse=reverse*10+digit;
i=i/10;

}
if( reverse == n){
    cout<<"the number is palindrome"<<endl;
}
else{
    cout<<"the number is not palindrome"<<endl;
}
return 0;
}