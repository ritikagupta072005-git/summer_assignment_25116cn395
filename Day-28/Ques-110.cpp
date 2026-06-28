// Write a program to Create bank account system.

#include<iostream>
#include<string>
using namespace std;

struct BankAccount{
    string name;
    int accountNumber;
    double balance;
};

int main(){
    BankAccount account;
    int choice;
    double amount;

    cout<<"Enter Account Holder Name: ";
    getline(cin,account.name);
    cout<<"Enter Account Number: ";
    cin>>account.accountNumber;
    account.balance=0.0;

    do{
        cout<<"\n--- Bank Account System ---\n";
        cout<<"1. Deposit Money\n";
        cout<<"2. Withdraw Money\n";
        cout<<"3. Check Balance\n";
        cout<<"4. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter amount to deposit: ";
                cin>>amount;
                account.balance+=amount;
                cout<<"Deposited successfully! New Balance: "<<account.balance<<endl;
                break;

            case 2:
                cout<<"Enter amount to withdraw: ";
                cin>>amount;
                if(amount<=account.balance) 
                {
                    account.balance-=amount;
                    cout<<"Withdrawal successful! New Balance: "<<account.balance<<endl;
                } 
                else 
                {
                    cout<<"Insufficient balance \n";
                }
                break;

            case 3:
                cout<<"Account Holder: "<<account.name<<endl;
                cout<<"Account Number: "<<account.accountNumber<<endl;
                cout<<"Current Balance: "<< account.balance<<endl;
                break;

            case 4:
                cout<<"Thank you for using the Bank System. Goodbye!\n";
                break;

            default:
                cout<<"Invalid choice. Try again.\n";
        }
    } while(choice != 4);

    return 0;
}