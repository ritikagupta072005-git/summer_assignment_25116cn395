// Write a program to Create student record system using arrays and strings.

#include<iostream>
#include<string>
using namespace std;

struct Student{
    int rollNo;
    string name;
    int age;
    string course;
};

int main(){
    Student students[100];   
    int count = 0;
    int choice,roll;

    do{
        cout<<"\n===== Student Record System ====="<<endl;
        cout<<"1. Add Student"<<endl;
        cout<<"2. Display All Students"<<endl;
        cout<<"3. Search Student by Roll No"<<endl;
        cout<<"4. Update Student Record"<<endl;
        cout<<"5. Delete Student Record"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1: 
                if(count>=100){
                    cout<<"Storage full!"<<endl;
                } 
                else{
                    cout<<"Enter Roll No: ";
                    cin>>students[count].rollNo;
                    cout<<"Enter Name: ";
                    cin>>students[count].name;
                    cout<<"Enter Age: ";
                    cin>>students[count].age;
                    cout<<"Enter Course: ";
                    cin>>students[count].course;
                    count++;
                    cout<<"Student added successfully."<<endl;
                }
                break;

            case 2:
                if(count==0){
                    cout<<"No records available."<<endl;
                } 
                else{
                    cout<<"\nRollNo\tName\tAge\tCourse"<<endl;
                    for(int i=0;i<count;i++){
                        cout<<students[i].rollNo<<"\t"
                            <<students[i].name<<"\t"
                            <<students[i].age<<"\t"
                            <<students[i].course<<endl;
                    }
                }
                break;

            case 3:
                cout<<"Enter Roll No to search: ";
                cin>>roll;
                {
                    bool found=false;
                    for(int i=0;i<count;i++){
                        if(students[i].rollNo==roll){
                            cout<<"Found: "<<students[i].name 
                                <<", Age: "<<students[i].age 
                                <<", Course: "<<students[i].course<<endl;
                            found=true;
                            break;
                        }
                    }
                    if(!found) cout<<"Student not found."<<endl;
                }
                break;

            case 4:
                cout<<"Enter Roll No to update: ";
                cin>>roll;
                {
                    bool found=false;
                    for(int i=0;i<count;i++){
                        if(students[i].rollNo==roll){
                            cout<<"Enter new name: ";
                            cin>>students[i].name;
                            cout<<"Enter new age: ";
                            cin>>students[i].age;
                            cout<<"Enter new course: ";
                            cin>>students[i].course;
                            cout<<"Record updated successfully."<<endl;
                            found=true;
                            break;
                        }
                    }
                    if(!found) cout<<"Student not found."<<endl;
                }
                break;

            case 5:
                cout<<"Enter Roll No to delete: ";
                cin>>roll;
                {
                    bool found=false;
                    for(int i=0;i<count;i++){
                        if(students[i].rollNo==roll){
                            for(int j=i;j<count-1;j++){
                                students[j]=students[j+1];
                            }
                            count--;
                            cout<<"Record deleted successfully."<<endl;
                            found=true;
                            break;
                        }
                    }
                    if(!found) cout<<"Student not found."<<endl;
                }
                break;

            case 6:
                cout<<"Exiting program. Goodbye!"<<endl;
                break;

            default:
                cout<<"Invalid choice. Try again."<<endl;
        }
    } while(choice !=6);

    return 0;
}