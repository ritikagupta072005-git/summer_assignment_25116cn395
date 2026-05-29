#include<iostream>
using namespace std;

int main(){
int i,n,digit=0,sum=0;
cout<<"Enter the number:";
cin>>n;
while(n>0){

digit=n%10;
sum=sum+digit;
n=n/10;

}
cout<<"sum of digit is = "<<sum<<endl;
return 0;

}