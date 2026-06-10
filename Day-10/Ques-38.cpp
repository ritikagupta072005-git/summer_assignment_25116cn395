// write a program to print reverse pyramid.
// *********
//  *******
//   *****
//    ***
//     *

#include<iostream>
using namespace std;
int main(){
int n=5,i,j;

for(i=n;i>=1;i--){
    
//space
for(j=i;j<n;j++){

    cout<<" ";
}
//star
for(j=1;j<=(2*i)-1;j++){
    cout<<"*";
}
 cout<<endl;   

}
return 0;
}