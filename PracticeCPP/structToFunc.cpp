#include<iostream>

using namespace std;

struct Car{

string model;
int year;
string color; 

};
void printCar(Car &car);
void paintCar(Car &car, string color);

int main(){

    Car car1;
    Car car2;

    car1.model = "Cruze";
    car1.year = 2015;
    car1.color = "Black";

    car2.model = "Rav4";
    car1.year = 2017;
    car1.color = "Silver";

    //cout<<&car1 <<'\n';

    printCar(car1);
    paintCar(car1, "Red");
    printCar(car1);

    

    return 0;
}

void printCar(Car &car){
    cout<<car.model<<'\n';
    cout<<car.year <<'\n';
    cout<<car.color <<'\n';
}

void paintCar(Car &car, string color){
    car.color = color;
}