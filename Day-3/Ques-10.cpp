#include<iostream>
using namespace std;
int main(){
int n1,n2,i,j;

cout<<"enter lowest value:";
cin>>n1;

cout<<"enter highest value:";
cin>>n2;

for(i=n1;i<=n2;i++){
for(j=2;j<i;j++){
if(i%j == 0){
    break;
}
}
if(j==i){
    cout<<i<<" ";
}

}

return 0;

}













