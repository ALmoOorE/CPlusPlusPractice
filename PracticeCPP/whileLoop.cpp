#include <iostream>
using namespace std;
#include<string>

int main(){
    string name;


//this will continue asking for your name as name stays empty. 
    while(name.empty()){
        cout<<"Enter your name: ";
        getline(cin, name);

    }
    cout<<"Hello "<< name;



    return 0;
}