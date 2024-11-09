#include <iostream>
using namespace std;

//Fahrenheit to Celsius converter
//C = (F -32) / (1.8)


int main(){

double temp;
char unit;

cout<<"******************* Temperature Conversion ***************\n";
cout<<"F - Fahrenheit\n";
cout<<"C - Celsuis\n";

cout<<"What unit woud you like to convert to?\n";
cin>>unit;

if(unit == 'C' ||unit == 'c'){
    cout<<"Enter the temperature in Fahrenheit \n";
    cin>>temp;
    temp = (temp - 32) / 1.8;
    cout<<"The temperture in Celsius is: "<< temp<< '\n';

}else if(unit == 'F' ||unit == 'f'){
    cout<<"Enter the temperature in Celsius \n";
    cin>>temp;
    temp = (temp * 1.8) + 32;
    cout<<"The temperature in Fahrenheit is: "<< temp << '\n';
}else {
    cout<<"Please enter in C or F.\n";
}

cout<<"*********************************************************\n";


    return 0;
}