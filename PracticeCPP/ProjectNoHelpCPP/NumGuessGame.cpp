#include<iostream>
#include<ctime>

using namespace std;

int playerGuess();
int computerNum();
int checkGuess(int guess, int cnum);

int main(){

    int numP = playerGuess();
  

   int numC = computerNum();
  
   //cout<<numC<<'\n';

   checkGuess(numP, numC);


    return 0;
}

int playerGuess(){
    int guess;
    cout<<"***************Welcome to the number guessing game*******************\n";
    cout<<"Guess the oppents number between 1 - 100: \n";
    cin>>guess;


    return guess;
}
int computerNum(){

    srand(time(NULL));
    int cnum = rand() % 100 + 1;
    //cout<<cnum<<'\n';
    return cnum;
}
int checkGuess(int guess, int cnum){
    int count =0;
    while(guess != cnum){
        if(guess > cnum){
            cout<< "Your guess is to high! \n";
        }else if(guess < cnum){
            cout<<"Your guess is to low! \n";
        }
       cout<< "Enter another guess: \n";
       cin>>guess; 
       
       count++;
        
    }
    cout<<"You guessed the correct number of: "<< cnum << " in "<< count << " tries ";
    return 0;
}