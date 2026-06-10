//write a program to print star pyramid.
//     *
 //   ***
 //  *****
 // *******
 //********* 

#include<iostream>
using namespace std;
int main(){
int n=5,i,j;

for(i=1;i<=n;i++){
//space
for(j=1;j<=n-i;j++){
    cout<<" ";
}

for(j=1;j<=(2*i)-1;j++){

    cout<<"*";
}

 cout<<endl;   

}
return 0;
}