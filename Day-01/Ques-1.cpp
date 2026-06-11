//Write a program to Calculate sum of first N natural numbers.

#include<iostream>
using namespace std;
int main()
{
int i,n,sum=0;
cout<<"Enter the number:";
cin>>n;

for(int i=1;i<=n;i++){
    sum+=i;
}
cout<< "sum of first "<<n<<" natural number is : "<<sum<<endl;
return 0;






}
