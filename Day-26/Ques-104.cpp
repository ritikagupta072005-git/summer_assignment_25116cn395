// Write a program to Create quiz application.

#include<iostream>
using namespace std;
int main(){
    int score=0;
    int answer;

    cout<<"Q1: What is the capital of India?"<<endl;
    cout<<"1) Mumbai\n2) Delhi\n3) Kolkata\n4) Chennai"<<endl;
    cout<<"Enter your choice (1-4): ";
    cin>>answer;
    if(answer==2) 
    {  
        cout<<"Correct!\n";
        score++;
    }
     else 
    {
        cout<<" Wrong! Correct answer is Delhi.\n";
    }

    cout<<"\nQ2: Which language is used for Android development?"<<endl;
    cout<<"1) Java\n2) Python\n3) Swift\n4) C++"<<endl;
    cout<<"Enter your choice (1-4): ";
    cin>>answer;
    if(answer==1) 
    { 
        cout<<"Correct!\n";
        score++;
    } 
    else 
    {
        cout<<" Wrong! Correct answer is Java.\n";
    }

    cout<<"\nQ3: Which planet is known as the Red Planet?"<<endl;
    cout<<"1) Earth\n2) Venus\n3) Jupiter\n4) Mars"<<endl;
    cout<<"Enter your choice (1-4): ";
    cin>>answer;
    if(answer==4) 
    {   
        cout<<"Correct!\n";
        score++;
    } 
    else 
    {
        cout<<" Wrong! Correct answer is Mars.\n";
    }

    cout<<"\nYour final score: "<<score<<"/3"<<endl;

    return 0;
}