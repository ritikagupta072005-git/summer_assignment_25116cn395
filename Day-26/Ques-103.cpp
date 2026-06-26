// Write a program to Create ATM simulation. 

#include<iostream>
using namespace std;
int main(){
    int balance=10000;   // initial balance
    int choice,amount;

    cout<<"===== ATM Simulation ====="<<endl;

    do{
        cout<<"\n 1. Check Balance";
        cout<<"\n 2. Deposit Money";
        cout<<"\n 3. Withdraw Money";
        cout<<"\n 4. Exit";
        cout<<"\n Enter your choice : ";
        cin>>choice;

        switch(choice) 
        {
            case 1:
                cout<<"Your balance is : "<<balance<<endl;
                break;

            case 2:
                cout<<"Enter amount to deposit: ";
                cin>>amount;
                balance+=amount;
                cout<<"Deposited successfully! New balance: "<<balance<<endl;
                break;

            case 3:
                cout<<"Enter amount to withdraw : ";
                cin>>amount;
                if(amount<=balance) 
                {
                    balance-=amount;
                    cout<<"Withdrawal successful! New balance: "<<balance<<endl;
                }
                 else
                 {
                    cout<<"Insufficient balance."<<endl;
                }
                break;

            case 4:
                cout<<"Thank you for using ATM. Goodbye!"<<endl;
                break;

            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }
    } while(choice!=4);

    return 0;
    
}