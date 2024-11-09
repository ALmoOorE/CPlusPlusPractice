#include<iostream>

using namespace std;

//fill() = fills a range of elements with a specfic value.
// fill(begin , end, value)

int main (){

    const int SIZE = 99;
    string foods[SIZE];

    fill(foods,foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3),foods + (SIZE/3)*2, "bugers");
    fill(foods + (SIZE/3)*2,foods + SIZE, "sandwich");
    for(string food : foods){
        cout<<food<<'\n';
    }


    return 0;
}