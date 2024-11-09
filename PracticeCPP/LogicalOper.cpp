#include<iostream>
using namespace std;

// && = check if two conditions are true
// || = check if atleast one of the two conditions is true
// ! = reverse the logical state of its operand


int main (){

bool sunny = true;

int temp;
cout<<"What is the tempature today? "<<endl;
cin>>temp;

//*************Combination of Ternary and &&***********
//temp>60 && temp<80 ? cout<<"The temp in nice today" : cout << "This weather sucks";


//**************Example of || with standard else/if ******************
//if(temp<32 || temp>85){
    //cout<<"This weather sucks";
//}else{
    //cout<<"This weather is nice";
//}

//*****Using ! to check if it is NOT sunny**********
if(!sunny){
    cout<<"It is not sunny";
}else{
    cout<<"It is sunny";
}

    return 0;
}