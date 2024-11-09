#include<iostream>
#include<vector>
using namespace std;



//To-Do List project -- Needs to be able to add, delete, display tasks on the list.

void showList(vector<string>);
void addTask(vector<string>);
void removeTask(vector<string>);



int main(){

int choice;

vector<string> list;

cout<<"*********TO-DO LIST**************\n";
cout<<"1. Show list\n";
cout<<"2. Add task to list\n";
cout<<"3. Remove task from list\n";

cin>>choice;

switch(choice){
    case 1: showList(list);
        break;
    case 2: addTask(list);
        break;
    case 3 : removeTask(list);
        break;       
}

    


    return 0;
}
void showList(vector<string> list){

} 
void addTask(vector<string> list){
    list.push_back("test");
}
void removeTask(vector<string>){

}