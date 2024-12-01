#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"
#include <string>

using namespace std;

class Car {
public:
    Car();
    Car(string m, string b);
    void setEngine();
    void setWheels();
    string getModel() const;
    void setModel(string m);
    string getBrand() const;
    void setBrand(string b);
    void printDetails() const;

private:
    Engine objEngine;
    Wheel objWheel1, objWheel2, objWheel3, objWheel4;
    string model;
    string brand;
};

#endif // CAR_H
