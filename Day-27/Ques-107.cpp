// Write a program to Create salary management system.

#include<iostream>
using namespace std;

struct Employee{
    int id;
    string name;
    double salary;
};

int main(){
    Employee employees[50];  
    int count=0;            
    int choice;

    do{
        cout<<"\n--- Salary Management System ---\n";
        cout<<"1. Add Employee Salary\n2. Show Salaries\n3. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        if(choice==1){
            cout<<"Enter Employee ID: ";
            cin>>employees[count].id;
            cout<<"Enter Name: ";
            cin>>employees[count].name;
            cout<<"Enter Salary: ";
            cin>>employees[count].salary;
            count++;
            cout<<"Salary record added!\n";
        }
        else if(choice==2){
            cout<<"\n--- Salary Records ---\n";
            if(count==0){
                cout<<"No records yet.\n";
            } 
            else{
                for(int i=0;i<count;i++){
                    cout<<"ID: "<<employees[i].id
                        <<" | Name: "<<employees[i].name
                        <<" | Salary: "<<employees[i].salary<<"\n";
                }
            }
        }
        else if(choice==3){
            cout<<"Goodbye!\n";
        }
        else{
            cout<<"Invalid choice.\n";
        }
    } while(choice !=3);

    return 0;
}