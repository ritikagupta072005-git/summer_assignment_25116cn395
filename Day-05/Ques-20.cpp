//Write a program to Find largest prime factor. 

#include <iostream>
using namespace std;

int main()
{
    int n , i , j , primefactor = -1;
     cout<<"Enter the number : ";
     cin>>n;

    for( i = 1; i <= n; i++) // To check factor from 1 to n.
    {
        bool isprime = true;
        
        if (n % i == 0) //To check if it factor or not.
        {
          for( j = 2; j < i; j++) //To check the factor is prime.
          {
            if (i % j == 0)
            {
                isprime=false;
                break;
            }
          }
          if ( isprime == true )
          {
              primefactor = i;         
          }
        }
    }
       cout<<"Largest prime factor is : "<<primefactor<<endl;
       
       return 0;

}
