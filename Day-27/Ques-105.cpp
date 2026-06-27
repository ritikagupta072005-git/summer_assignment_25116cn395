// Write a program to Create student record management system.

#include<iostream>
using namespace std;
struct Student{
    int rollNo;
    string name;
    int age;
};

int main(){
    Student students[50];   
    int count = 0;          
    int choice;

do{
    cout<<"\n--- Student Record System ---\n";
    cout<<"1. Add Student\n2. Show Students\n3. Exit\n";
    cout<<"Enter choice: ";
    cin>>choice;

    if(choice==1){
            
    cout<<"Enter Roll No: ";
    cin>>students[count].rollNo;
    cout<<"Enter Name: ";
    cin>>students[count].name;
    cout<<"Enter Age: ";
    cin>>students[count].age;
    count++;
    cout<<"Student added!\n";
    }
       
    else if(choice==2){
    cout<<"\n--- Student List ---\n";
    for(int i=0;i<count;i++){
            cout<<"Roll No: "<<students[i].rollNo
                 <<" | Name: "<<students[i].name
                 <<" | Age: "<<students[i].age<<"\n";
    }
    if(count==0){
            cout<<"No records yet.\n";
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