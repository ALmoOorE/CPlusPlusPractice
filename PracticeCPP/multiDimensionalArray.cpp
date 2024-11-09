#include<iostream>
using namespace std;

int main(){

    string cars[][3] = {{"mustang", "escape", "F-150"},
                       {"corvette", "equinox","silverado"},
                       {"challenger","durango","ram"}};

int row = sizeof(cars)/sizeof(cars[0]); 
int col = sizeof(cars[0])/sizeof(cars[0][0]);     

for(int i =0; i < row;i++){
    for(int j = 0; j < col;j++){
        cout<<cars[i][j]<< " ";
    }
    cout<<'\n';
}

    return 0;
}