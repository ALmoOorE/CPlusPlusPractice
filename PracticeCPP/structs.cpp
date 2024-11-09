#include<iostream>
using namespace std;

//struct = A structure that group related vars under one name.
//         -structs can contain many diffrenet var types: str int doubl float
//          -Vars in a struct are known as 'Members'
//          --Members can be access with . "Class Member Access Operators"

struct student{
    string name;
    double gpa;
    bool enrolled;
};

int main(){

student student1;
student1.name = "Austin";
cout<<"what is your gpa";
cin>>student1.gpa;
student1.enrolled = true;

cout<< student1.name <<'\n'<<student1.gpa <<'\n'<< student1.enrolled;

    return 0;
}