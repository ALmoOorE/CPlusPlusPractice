#include<iostream>
#include<string>
using namespace std;
int searchArray(string array[], int size, string element);

int main(){

   string food[] = {"Pizza","Cereal","Toast","Burgers"};
    int size = sizeof(food)/sizeof(food[0]);
    int index;
    string myFood;

    cout<<"Enter element to search for: \n";
    getline(cin, myFood);

    index = searchArray(food, size, myFood);

    if(index != -1){
        cout<<myFood<< " is at index "<< index;
    }else{
        cout<<myFood<<" is not in the array";
    }


    return 0;
}

int searchArray(string array[], int size, string element){
    for(int i =0; i< size; i++){
        if(array[i]== element){
            return i;
        }
    }
    return -1;
}