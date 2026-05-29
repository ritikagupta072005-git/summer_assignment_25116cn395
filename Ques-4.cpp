#include<iostream>
using namespace std;

int main(){
int i,n,digit=0;
cout<<"Enter the number:";
cin>>n;
while(n>0){

n=n/10;
digit++;    

}

cout<<"Number of digits are:"<<digit<<endl;

return 0;


}
