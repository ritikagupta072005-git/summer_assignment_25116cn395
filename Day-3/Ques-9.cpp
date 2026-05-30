#include<iostream>
using namespace std;
int main(){
int n,i;

cout<<"Enter the number:";
cin>>n;
for(i=2;i<=n-1;i++){
if(n%i==0){
    cout<<"the number is not prime"<<endl;
    return 0;
}
}
cout<<"the number is prime"<<endl;

return 0;

}