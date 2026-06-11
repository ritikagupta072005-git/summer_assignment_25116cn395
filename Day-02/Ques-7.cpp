//Write a program to Find product of digits.

#include<iostream>
using namespace std;

int main(){
int i,n,digit=0,product=1,temp;
cout<<"Enter the number:";
cin>>n;
temp=n;
while(n>0){
digit=n%10;
product=product*digit;
n=n/10;

}
cout<<"product of digits "<<temp<<" = "<<product<<endl;
return 0;
}
