#include<iostream>

using namespace std;

// object = A collection of attrubutes and methods.
//          -they can have characteristics and could perform actions
//          -can be used to mimic real world items (phone, book, car)
//          -createed from a class which acts as a blue-print

class Human {
    public:
    //attributes
        string name;
        string job;
        int age;
    //methods
        void eat(){
            cout<<"This person is eating";
        }
        void drink(){
            cout<<"This person is drinking";
        }
        void sleep(){
            cout<<"This person is sleeping"; 
        }

};

int main(){

    Human human1;

    human1.name = "Austin";
    human1.job = "Service Desk Analysis";
    human1.age = 25;

    cout<<human1.name<<'\n';
    cout<<human1.job<<'\n';
    cout<<human1.age<<'\n';

    human1.eat();
    cout<<'\n';
    human1.drink();
     cout<<'\n';
    human1.sleep();

    return 0;
}
