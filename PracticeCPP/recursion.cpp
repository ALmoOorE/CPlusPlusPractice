#include<iostream>

using namespace std;
int fact(int num);

int main(){

    cout<<fact(10);
    
    return 0;
}

int fact(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result *i;
    }
    return result; 
}

