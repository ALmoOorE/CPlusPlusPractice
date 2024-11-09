#include <iostream>

using namespace std;

int main(){

    double n1;
    double n2;
    char choice;

    do{
    cout<<"*********************CALCULATER*******************\n";
    cout<<"Enter in your first number: \n";
    cin>>n1;
    cout<<"Enter in your second number: \n";
    cin>>n2;

    cout<<"What operation would you like to perform? '+', '-', '*', '/', or press 'Q' to quit \n";
    cin>>choice;
    if(choice != '+' || '-' || '*' || '/'|| 'Q'){
        cout<<"Enter a valid input \n";
    }


        switch(choice){
        case '+' : cout << n1 << "+" << n2 << " = "<< n1+n2<< '\n';
            break;
        case '-' : cout<< n1 << " - "<< n2 << " = " << n1-n2<< '\n';
            break;
        case '*' : cout<< n1 << " * " << n1 << " = " <<n1*n2<< '\n';
            break;
        case '/': (n2 == 0 ? cout<< "You cannot divide by 0" : cout<< n1 <<  " / " << n2 << " = "<< n1/n2)<< '\n';
            break;            
        }
    }while(choice!='Q' && 'q');



    return 0;
}

