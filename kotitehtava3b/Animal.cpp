#include "Animal.h"

using namespace std;

Animal::Animal(){

}

//Testitulostus, jolla varmistetaan olion animal tuhoutuminen
Animal::~Animal(){
    cout<<"Tuhotaan elain"<<endl;
}

void Animal::Animal::callOut() const {
    cout<<"Elain aantelee."<<endl;
}
