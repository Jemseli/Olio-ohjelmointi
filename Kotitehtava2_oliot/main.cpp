#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>
#include <string>

int main() {
    //Car-olio
    Car myCar;
    myCar.setBrand("Volvo");
    myCar.setModel("S40");
    myCar.setYearModel(2003);

    myCar.printData();

    //Rectangle-olio
    Rectangle*myRectangle=new Rectangle();
    myRectangle->setWidth(6.0);
    myRectangle->setHeight(4.0);

    std::cout<<"Area: "<<myRectangle->getArea()<<std::endl;
    std::cout<<"Circumference: "<<myRectangle->getCircum()<<std::endl;

    delete myRectangle;

    //Student-olio:
    std::unique_ptr<Student>myStudent=std::make_unique<Student>();
    myStudent->setName("Kiti");
    myStudent->setStudentNumber(1234);
    myStudent->setAverage(5.0);

    std::cout<<"Name: "<<myStudent->getName()<<std::endl;
    std::cout<<"Student Number: "<<myStudent->getStudentNumber()<<std::endl;
    std::cout<<"Average: "<<myStudent->getAverage()<<std::endl;
    return 0;
}
