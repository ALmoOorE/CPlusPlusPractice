#include <iostream>
using namespace std;

//do while loops = do some block of code first, then repeat again if condtion is true. 


int main(){

    int num;

    do{
        cout<<"enter a postive number: ";
        cin>>num;

    }while(num<0);

cout<< "you choose: "<<num;


    return 0;
}