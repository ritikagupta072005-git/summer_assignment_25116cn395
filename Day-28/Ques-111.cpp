// Write a program to Create ticket booking system. 

#include<iostream>
#include<string>
using namespace std;

int main(){
    string names[20],movies[20];
    int seats[20];
    bool booked[20]={false};
    int ticketCount=0;
    int choice;

    do{
        cout<<"\n--- Ticket Booking System ---\n";
        cout<<"1. Book Ticket\n";
        cout<<"2. View Tickets\n";
        cout<<"3. Cancel Ticket\n";
        cout<<"4. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        if(choice==1){
            if(ticketCount>=5){
                cout<<"No more tickets can be booked.\n";
            } 
            else{
                cout<<"Enter your name: ";
                cin>>names[ticketCount];
                cout<<"Enter movie name: ";
                cin>>movies[ticketCount];
                cout<<"Enter seats: ";
                cin>>seats[ticketCount];
                booked[ticketCount]=true;
                cout<<"Ticket booked! ID: "<<ticketCount+1<<"\n";
                ticketCount++;
            }
        }
        else if(choice==2){
            if(ticketCount==0){
                cout<<"No tickets booked yet.\n";
            } 
            else{
                for(int i=0;i<ticketCount;i++){
                    if(booked[i]){
                        cout<<"ID: "<<i+1
                            <<" | Name: "<<names[i]
                            <<" | Movie: "<<movies[i]
                            <<" | Seats: "<<seats[i]<<"\n";
                    }
                }
            }
        }
        else if(choice==3){
            int id;
            cout<<"Enter Ticket ID to cancel: ";
            cin>>id;
            if(id>=1 && id<=ticketCount && booked[id-1]){
                booked[id-1]=false;
                cout<<"Ticket cancelled!\n";
            } 
            else{
                cout<<"Invalid ID or already cancelled.\n";
            }
        }
        else if(choice==4){
            cout<<"Goodbye!\n";
        }
        else{
            cout<<"Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}