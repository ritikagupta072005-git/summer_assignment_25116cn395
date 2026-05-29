#include<iostream>
using namespace std;

int main(){
int i,n,digit=0,product=1;
cout<<"Enter the number:";
cin>>n;
while(n>0){
digit=n%10;
product=product*digit;
n=n/10;

}
cout<<"product of digits "<<n<<" = "<<product<<endl;
return 0;
}
