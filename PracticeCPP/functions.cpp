#include<iostream>

using namespace std;

//You can use the template to accept any data type. 
template <typename T, typename U>

T max(T x, U y){
    return (x>y) ? x :y;
}

int main(){
    cout<< max('1','2');
    return 0;
}