#include<iostream>

using namespace std;

int main(){

    //string students[] = {"austin","caitlin","Joe"};

    //for(int i = 0; i<sizeof(students)/sizeof(string); i++){
        //cout<< students[i]<<'\n';

   // }


   char grades[] = {'A','B','C'};
   for(int i =0; i < sizeof(grades)/sizeof(char);i++){
    cout<<grades[i]<<'\n';
   }

    return 0;
}