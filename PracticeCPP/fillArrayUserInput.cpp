#include<iostream>
#include<string>
#include <cctype>

using namespace std;

int main(){

    string food[5];
    int size = sizeof(food)/sizeof(food[0]);
    string temp;
    for(int i = 0; i < size;i++){
        cout<<"Enter a food you like or 'q' to quit "<<i+1<<":";
        getline(cin,temp);

        if(temp == "q"){
            break;

        }else{
            food[i]=temp;
        }
    }

    cout<<"You like the following foods: "<< food<<'\n';

    for(int i = 0; !food[i].empty(); i++){
        cout<<food[i]<<'\n';
    }

    return 0;
}