#include<iostream>
using namespace std;

int main(){
int i,n,mult=1;

cout<<"Enter the number :";
cin>>n;

for(i=1;i<=10;i++){

    mult=n*i;
    cout<<n<<"*"<<i<<"="<<mult<<endl;
    
}


return 0;



}