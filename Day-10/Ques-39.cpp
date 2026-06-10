// write a program to print  number Pyramid .
//     1
//    121
//   12321
//  1234321
// 123454321

#include<iostream>
using namespace std;
int main(){
int n=5,i,j;

for(i=1;i<=n;i++){
//space
for(j=i;j<=(n-1);j++){
  cout<<" ";
}
// ascending numbers
for(j=1;j<=i;j++){
    cout<<j;
}
// descending numbers
if(i!=1){
    for(j=i-1;j>=1;j--){
    cout<<j;
}

}
 cout<<endl;   

}
return 0;
}