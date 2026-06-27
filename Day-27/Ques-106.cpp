// Write a program to Create employee management system.

#include<iostream>
using namespace std;

struct Employee{
    int id;
    string name;
    int age;
    string department;
};

int main(){

    Employee employees[50];   
    int count = 0;            
    int choice;

    do{
        cout<<"\n--- Employee Management System ---\n";
        cout<<"1. Add Employee\n2. Show Employees\n3. Search Employee\n4. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        if(choice==1){
        cout<<"Enter ID: ";
        cin>>employees[count].id;
        cout<<"Enter Name: ";
        cin>>employees[count].name;
        cout<<"Enter Age: ";
        cin >> employees[count].age;
        cout<<"Enter Department: ";
        cin>>employees[count].department;
        count++;
        cout<<"Employee added!\n";
        }
        else if(choice==2){
        cout<<"\n--- Employee List ---\n";
            for(int i=0;i<count;i++) 
            {
                cout<<"ID: "<<employees[i].id
                    <<" | Name: "<<employees[i].name
                    <<" | Age: "<<employees[i].age
                    <<" | Department: "<<employees[i].department<<"\n";
            }
            if(count==0){
              cout << "No records yet.\n";  
            }
        }
        else if(choice==3){
            int searchId;
            cout<<"Enter ID to search: ";
            cin>>searchId;
            bool found =false;
            for(int i=0;i<count;i++){
                if(employees[i].id==searchId){
                    cout<<"Found: ID "<<employees[i].id
                        <<" | Name: "<<employees[i].name
                        <<" | Age: "<<employees[i].age
                        <<" | Department: "<<employees[i].department<<"\n";
                    found =true;
                }
            }
            if(!found){
                cout << "Employee not found.\n";
            }
        }
        else if(choice==4){
            cout<<"Goodbye!\n";
        }
        else{
            cout<<"Invalid choice.\n";
        }
    } while(choice !=4);

    return 0;
}