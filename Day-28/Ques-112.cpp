// Write a program to Create contact management system.

#include<iostream>
#include<string>
using namespace std;

int main(){
    string names[50],phones[50];
    bool saved[50]={false};
    int contactCount=0;
    int choice;

    do{
        cout<<"\n--- Contact Management System ---\n";
        cout<<"1. Add Contact\n";
        cout<<"2. View Contacts\n";
        cout<<"3. Delete Contact\n";
        cout<<"4. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        if(choice==1){
            if(contactCount>=10){
                cout<<"Contact list full!\n";
            } 
            else{
                cout<<"Enter name: ";
                cin>>names[contactCount];
                cout<<"Enter phone number: ";
                cin>>phones[contactCount];
                saved[contactCount]=true;
                cout<<"Contact saved! ID: "<<contactCount+1<<"\n";
                contactCount++;
            }
        }
        else if(choice==2){
            if(contactCount==0){
                cout<<"No contacts yet.\n";
            } 
            else{
                cout<<"\n--- Contacts ---\n";
                for(int i=0;i<contactCount;i++){
                    if(saved[i]){
                        cout<<"ID: "<<i+1
                            <<" | Name: "<<names[i]
                            <<" | Phone: "<<phones[i]<<"\n";
                    }
                }
            }
        }
        else if(choice==3){
            int id;
            cout<<"Enter Contact ID to delete: ";
            cin>>id;
            if(id>=1 && id<=contactCount && saved[id-1]){
                saved[id-1]=false;
                cout<<"Contact deleted!\n";
            } 
            else{
                cout<<"Invalid ID or already deleted.\n";
            }
        }
        else if(choice==4){
            cout<<"Goodbye!\n";
        }
        else{
            cout<<"Invalid choice.\n";
        }

    } while(choice!=4);

    return 0;
}