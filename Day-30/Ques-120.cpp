// Write a program to Develop complete mini project using arrays,strings and functions. 

#include<iostream>
using namespace std;

int main(){
    char board[3][3];
    int choice,row,col;
    int player;
    bool gameOver;


    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            board[i][j]=' ';

    do{
        cout<<"\n===== Tic Tac Toe Menu ====="<<endl;
        cout<<"1. Play Game"<<endl;
        cout<<"2. Show Board"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice){
            case 1:{
            
                for(int i=0;i<3;i++)
                    for(int j=0;j<3;j++)
                        board[i][j]=' ';

                player=1;
                gameOver=false;

                while(!gameOver){
                    cout<<"\n";
                    for(int i=0;i<3;i++){
                        cout<<" ";
                        for(int j=0;j<3;j++){
                            cout<<board[i][j];
                            if(j<2) cout<<" | ";
                        }
                        cout<<"\n";
                        if(i<2) cout<<"---+---+---\n";
                    }

                    cout<<"\nPlayer "<<player<<" enter row and col (0-2): ";
                    cin>>row>>col;

                    char symbol=(player==1)?'X':'O';

                    if(row>=0 && row<3 && col>=0 && col<3 && board[row][col]==' ') 
                    {
                        board[row][col]=symbol;

                
                        bool win=false;
                        for(int i=0;i<3;i++){
                            if(board[i][0]==symbol && board[i][1]==symbol && board[i][2]==symbol) win=true;
                            if(board[0][i]==symbol && board[1][i]==symbol && board[2][i]==symbol) win=true;
                        }
                        if(board[0][0]==symbol && board[1][1]==symbol && board[2][2]==symbol) win=true;
                        if(board[0][2]==symbol && board[1][1]==symbol && board[2][0]==symbol) win=true;

                
                        bool full=true; // draw
                        for(int i=0;i<3;i++)
                            for(int j=0;j<3;j++)
                                if(board[i][j]==' ') full=false;

                        if(win){
                            cout<<"Player "<<player<<" wins!"<<endl;
                            gameOver=true;
                        } 
                        else if(full){
                            cout<<"It's a draw!"<<endl;
                            gameOver=true;
                        } 
                        else{
                            player=(player==1)?2:1;
                        }
                    } 
                    else{
                        cout<<"Invalid move, try again."<<endl;
                    }
                }
                break;
            }
            case 2:
                cout<<"\n";
                for(int i=0;i<3;i++){
                    cout<<" ";
                    for(int j=0;j<3;j++){
                        cout<<board[i][j];
                        if(j<2) cout<<" | ";
                    }
                    cout<<"\n";
                    if(i<2) cout<<"---+---+---\n";
                }
                break;
            case 3:
                cout<<"Exiting game. Goodbye!"<<endl;
                break;
            default:
                cout<<"Invalid choice."<<endl;
        }
    } while(choice!=3);

    return 0;
}