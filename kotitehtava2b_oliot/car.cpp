#include "car.h"
#include <iostream>
#include <vector>

using namespace std;

Car::Car(string b, string m, int y):brand(b), model(m), yearModel(y) {}

void Car::printData() const{
    cout<<"Brand: "<<brand<<", Model: "<<model<<", Yearmodel: "<<yearModel<<endl;
}

int main(){
    vector<Car>carList;

    carList.push_back(Car("Volvo", "S40", 2003));
    carList.push_back(Car("Kia", "Ceed", 2008));
    carList.push_back(Car("Volkswagen", "Golf", 2008));

    cout<<"2nd car on the list:"<<endl;
    carList[1].printData();

    cout<<"\nAll cars:"<<endl;
    for (size_t i=0; i<carList.size();++i){
        carList[i].printData();
    }
    return 0;
}


