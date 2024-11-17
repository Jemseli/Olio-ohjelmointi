#include <iostream>
#include "car.h"
#include <string>

void Car::printData() const {
    std::cout<<"Brand: "<<brand<<", Model: "<<model<<", Year: "<<yearModel<<std::endl;
}
void Car::setBrand(const std::string& b) {brand=b;}
void Car::setModel(const std::string& m) {model=m;}
void Car::setYearModel(int y) {yearModel=y;}


