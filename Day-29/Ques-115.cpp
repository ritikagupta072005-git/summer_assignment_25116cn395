// Write a program to Create menu-driven string operations system. 

#include<iostream>
#include<string>
#include<algorithm> 
using namespace std;

int main(){
    string str1,str2;
    int choice;

    do{
        cout<<"\n===== String Operations Menu ====="<<endl;
        cout<<"1. Input Strings"<<endl;
        cout<<"2. Display Strings"<<endl;
        cout<<"3. Length of String"<<endl;
        cout<<"4. Concatenate Strings"<<endl;
        cout<<"5. Compare Strings"<<endl;
        cout<<"6. Reverse String"<<endl;
        cout<<"7. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter first string: ";
                cin>>str1;
                cout<<"Enter second string: ";
                cin>>str2;
                break;

            case 2:
                cout<<"String 1: "<<str1<<endl;
                cout<<"String 2: "<<str2<<endl;
                break;

            case 3:
                cout<<"Length of String 1: "<<str1.length()<<endl;
                cout<<"Length of String 2: "<<str2.length()<<endl;
                break;

            case 4:
                cout<<"Concatenated String: "<<str1+str2<<endl;
                break;

            case 5:
                if(str1==str2)
                    cout<<"Strings are equal."<<endl;
                else if(str1>str2)
                    cout<<"String 1 is greater than String 2."<<endl;
                else
                    cout<<"String 2 is greater than String 1."<<endl;
                break;

            case 6:{
                    string temp=str1;
                    reverse(temp.begin(),temp.end());
                    cout<<"Reverse of String 1: "<<temp<<endl;

                    temp=str2;
                    reverse(temp.begin(),temp.end());
                    cout<<"Reverse of String 2: "<<temp<<endl;
                }
                break;

            case 7:
                cout<<"Exiting program. Goodbye!"<<endl;
                break;

            default:
                cout<<"Invalid choice. Try again."<<endl;
        }
    } while(choice !=7);

    return 0;
}