#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

char getUserChoice();
char GetPCChoice();
void showChoice(char choice);
void ChooseWinner(char player, char computer);



int main(){

    char player;
    char computer;

    player = getUserChoice();
    computer = GetPCChoice();

    cout<<"You chose: ";
    showChoice(player);
    cout<<"The computer chose: ";
    showChoice(computer);

    ChooseWinner(player, computer);



    return 0;
}

char getUserChoice(){
    char player;
    do{
        cout<<"****************Rock--Paper--Scissor--Game********************\n";
        cout<<"Pick a choice:\n";
        cout<<"r - rock\n";
        cout<<"p - paper:\n";
        cout<<"s - scissors:\n";
        cout<<"***************************************************************\n";
        cin>>player;
    }while(player != 'r' && player!= 'p' && player!= 's');

    return player;

}
char GetPCChoice(){
    char computer;

    srand(time(NULL));
    int num = rand() % 3 +1; 

    switch(num){
        case 1 : return'r';
           
        case 2 : return 'p';
            
        case 3 : return 's';
            
    }
    //cout<<num;

    return computer;
}
void showChoice(char choice){

    switch(choice){
        case 'r': cout<<"Rock\n";
        break;
        case 'p': cout<<"Paper\n";
        break;
        case 's': cout<<"Scissors\n";
        break;
    }
  
}
void ChooseWinner(char player, char computer){
  

   switch(player){
    case 'r' : if(computer == 'r'){
        cout<<"It's a tie!\n";
    }else if(computer == 's'){
        cout<<"You win!\n";
    }else{
        cout<<"You lose"<<endl;
    }break;
    case 'p' : if(computer == 'p'){
        cout<<"It's a tie!\n";
    }else if(computer == 'r'){
        cout<<"You win!\n";
    }else{
        cout<<"You lose"<<endl;
    }break;
    case 's' : if(computer == 's'){
        cout<<"It's a tie!\n";
    }else if(computer == 'p'){
        cout<<"You win!\n";
    }else{
        cout<<"You lose"<<endl;
    }break; 
   }
}