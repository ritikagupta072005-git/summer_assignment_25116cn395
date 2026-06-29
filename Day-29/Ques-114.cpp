// Write a program to Create menu-driven array operations system.

#include<iostream>
using namespace std;

int main(){
    int arr[100],n=0;   
    int choice,pos,val,searchVal;

    do{
        cout<<"\n===== Array Operations Menu ====="<<endl;
        cout<<"1. Insert Element"<<endl;
        cout<<"2. Delete Element"<<endl;
        cout<<"3. Search Element"<<endl;
        cout<<"4. Display Array"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                if(n>=100){
                    cout<<"Array is full!"<<endl;
                }
                 else{
                    cout<<"Enter elements to insert: ";
                    cin>>val;
                    cout<<"Enter position (0 to "<<n<<"): ";
                    cin>>pos;
                    if(pos<0 || pos>n){
                        cout<<"Invalid position!"<<endl;
                    } 
                    else{
                        for(int i=n;i>pos;i--){
                            arr[i]=arr[i-1];
                        }
                        arr[pos]=val;
                        n++;
                        cout<<"Element inserted."<<endl;
                    }
                }
                break;

            case 2:
                if(n==0){
                    cout<<"Array is empty!"<<endl;
                } 
                else{
                    cout<<"Enter position to delete (0 to "<<n-1<<"): ";
                    cin>>pos;
                    if(pos<0 || pos>=n){
                        cout<<"Invalid position!"<<endl;
                    } 
                    else{
                        for(int i=pos;i<n-1;i++){
                            arr[i]=arr[i+1];
                        }
                        n--;
                        cout<<"Element deleted."<<endl;
                    }
                }
                break;

            case 3:
                if(n==0){
                    cout<<"Array is empty!"<<endl;
                } 
                else{
                    cout<<"Enter element to search: ";
                    cin>>searchVal;
                    bool found=false;
                    for(int i=0;i<n;i++){
                        if(arr[i]==searchVal){
                            cout<<"Element found at position "<<i<<endl;
                            found=true;
                            break;
                        }
                    }
                    if(!found) cout<<"Element not found."<<endl;
                }
                break;

            case 4:
                if(n==0){
                    cout<<"Array is empty!"<<endl;
                } 
                else{
                    cout<<"Array elements: ";
                    for(int i=0;i<n;i++){
                        cout<<arr[i]<<" ";
                    }
                    cout<<endl;
                }
                break;

            case 5:
                cout<<"Exiting program. Goodbye!"<<endl;
                break;

            default:
                cout<<"Invalid choice. Try again."<<endl;
        }
    } while(choice !=5);

    return 0;
}