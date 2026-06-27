// Write a program to Create marksheet generation system.

#include<iostream>
#include<string>
using namespace std;

int main(){
    string name,rollNo;
    int subjects;

    cout<<"Enter Student Name : ";
    getline(cin,name);

    cout<<"Enter Roll Number : ";
    cin>>rollNo;
    cout<<"Enter number of subjects: ";
    cin>>subjects;

    int marks[subjects];
    int total=0;

    for(int i=0;i<subjects;i++){
        cout<<"Enter marks for subject "<<i + 1<<" : ";
        cin>>marks[i];
        total+=marks[i];
    }

    float percentage =(float)total/subjects;
    char grade;

    if(percentage>=90) grade='A';
    else if(percentage>=75) grade='B';
    else if(percentage>=60) grade='C';
    else if(percentage>=40) grade='D';
    else grade='F';

    cout<<"\n----- Marksheet -----\n";
    cout<<"Name : "<<name<<endl;
    cout<<"Roll No: "<<rollNo<<endl;
    cout<<"Total Marks: "<<total<<endl;
    cout<<"Percentage: "<<percentage<<"%"<<endl;
    cout<<"Grade: "<<grade<<endl;
    cout<<"---------------------\n";

    return 0;
}