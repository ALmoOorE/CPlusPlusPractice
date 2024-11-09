#include<iostream>

using namespace std;

//Foreach loop = loop that eases the trversal over an iterable data set.


int main(){

    string names[] = {"Austin", "Caitlin","Daisy"};
    for(string name : names){
        cout<<name<<'\n';
    }

    int grades[] = {90,80,10,20};
    for(int grade : grades){
        cout<<grade<<'\n';
    }

    return 0;
}