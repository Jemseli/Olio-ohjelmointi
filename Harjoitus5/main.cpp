#include <iostream>
#include "classB.h"
#include "AssosiationA.h"
#include "AggregationA.h"

using namespace std;

int main() {

//Vaihe 1
    int a=5;
    int b=10;

    cout<<"a:n arvo on: "<<a<<" ja osoite on: "<<&a<<endl;
    cout<<"b:n arvo on: "<<b<<" ja osoite on: "<<&b<<endl<<endl;

    int *myPointer=&a;
    cout<<"Pointterin osoittama osoite on: "<<myPointer<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on: "<<*myPointer<<endl<<endl;

    myPointer=&b;
    cout<<"Pointterin osoittama osoite on: "<<myPointer<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on: "<<*myPointer<<endl<<endl;

    int &refA=a;
    cout<<"refA osoittaa osoitteeseen: "<<&refA<<endl;
    cout<<"refA:n osoittaman muistipaikan arvo on: "<<refA<<endl<<endl;

//Vaihe 4
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setinfoB("Olion objAss asettama info");

    cout<<endl<<"***************************"<<endl<<endl;
    cout<<"Assosiaatio esimerkki:"<<endl<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getInfoB()<<endl<<endl;

//Vaihe 3
    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setinfoB("Olion Agr asettama info");

    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr: "<<objAggr.getinfoB()<<endl<<endl;

    return 0;
}
