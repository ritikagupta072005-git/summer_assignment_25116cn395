// Write a program to Create library management system. 

#include<iostream>
#include<string>
using namespace std;

struct Book 
{
    int id;
    string title;
    string author;
    bool issued;
};

int main() 
{
    Book library[50];
    int count=0,choice;

    do 
    {
        cout<<"\n--- Simple Library System ---\n";
        cout<<"1. Add Book\n2. Show Books\n3. Issue Book\n4. Return Book\n5. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        if(choice==1) 
        {
            cout<<"Enter title (one word): ";
            cin>>library[count].title;
            cout<<"Enter author (one word): ";
            cin>>library[count].author;
            library[count].id=count + 1;
            library[count].issued=false;
            count++;
            cout<<"Book added!\n";
        }
        else if(choice==2) 
        {
            for(int i=0;i<count;i++) 
            {
                cout<<library[i].id<<". "<<library[i].title
                    <<" by "<<library[i].author
                    <<" ["<<(library[i].issued ? "Issued" : "Available")<<"]\n";
            }
        }
        else if(choice==3) 
        {
            int id;
            cout<<"Enter book ID to issue: ";
            cin>>id;
            if(id<=count && !library[id-1].issued) 
            {
                library[id-1].issued=true;
                cout<<"Book issued!\n";
            } 
            else 
            {
                cout<<"Invalid ID or already issued.\n";
            }
        }
        else if(choice==4) 
        {
            int id;
            cout<<"Enter book ID to return : ";
            cin>>id;
            if(id<=count && library[id-1].issued) 
            {
                library[id-1].issued=false;
                cout<<"Book returned!\n";
            } 
            else 
            {
                cout<<"Invalid ID or not issued.\n";
            }
        }
    } while(choice !=5);

    return 0;
}