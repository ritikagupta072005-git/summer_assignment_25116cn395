#include<iostream>
using namespace std;

int main(){
int i,n,digit=0,reverse=0;
cout<<"Enter the number:";
cin>>n;
while(n>0){
digit=n%10;
reverse=reverse*10+digit;
n=n/10;

}
cout<<"reverse of the number "" = "<<reverse<<endl;
return 0;
}