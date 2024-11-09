#include<iostream>
using namespace std;


// enums = a user-defined data type that consists of paried named intgers contants. These are great if you have a set of potentail options.

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday= 5, saturday = 6};

int main(){
    
    Day today = sunday;

    switch(today){

        case sunday: cout<<"Today is Sunday";
            break;
        case monday: cout<<"Today is Monday";
            break;
        case tuesday: cout<<"Today is Tuesday";
            break;
        case wednesday: cout<<"Today is Wednesday";
            break;
        case thursday: cout<<"Today is Thursday";
            break;
        case friday: cout<<"Today is Friday";
            break;
        case saturday: cout<<"Today is Saturday";
            break;
        default : cout<<"Invlaid";    

    }

    return 0;
}