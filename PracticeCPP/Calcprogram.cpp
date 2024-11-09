#include<iostream>

using namespace std;


int main(){

double num1;
double num2;
cout<<"Enter your first number: "<<endl;
cin>>num1;
cout<<"Enter you second number: "<<endl;
cin>>num2;


char oper;
cout<<"Enter in the the operatior you want to use(+,-,*,/)";
cin>>oper;

switch(oper){

    case '+':
    cout<<num1 << " + " << num2 << " = "<< num1+num2 << endl;
    break;

    case '-':
    cout<<num1 << " - " << num2 << " = "<< num1-num2 << endl;
    break;

    case '*':
    cout<<num1 << " * " << num2 << " = "<< num1*num2 << endl;
    break;

    case '/':
    if (num2 !=0)
    cout<<num1 << " / " << num2 << " = "<< num1/num2 << endl;
    else
    cout<<"You can't divide by 0";
    break;

    default:
    cout<<"Invalid";
    break;
}

}