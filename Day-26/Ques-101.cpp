// Write a program to Create number guessing game.

#include<iostream>
#include<cstdlib>  // for rand() and srand()
#include<ctime>    // for time()
using namespace std;

int main() 
{
    //random number generator
    srand(time(0));
    
    int numberToGuess=rand() % 100 + 1; // Random number between 1 and 100
    int userGuess;
    int attempts=0;

    cout<<"Welcome to the Number Guessing Game!"<<endl;
    cout<<"I have chosen a number between 1 and 100."<<endl;
    cout<<"Try to guess it!"<<endl;

    do 
    {
        cout<<"Enter your guess : ";
        cin>>userGuess;
        attempts++;

        if(userGuess>numberToGuess) 
        {
            cout<<"Too high! Try again."<<endl;
        }
         else if(userGuess<numberToGuess) 
         {
            cout<<"Too low! Try again."<<endl;
        }
         else 
        {
            cout<<"Congratulations! You guessed the number in "<<attempts<<" attempts."<<endl;
        }
    } 
    while(userGuess != numberToGuess);

    return 0;
}