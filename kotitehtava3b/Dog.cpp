#include "Dog.h"

using namespace std;

Dog::Dog() {

}

//Testitulostus, jolla varmistetaan olion dog tuhoutuminen
Dog::~Dog() {
    cout<<"Tuhotaan koira"<<endl;
}

void Dog::Dog::callOut() const {
    cout<<"Koira haukkuu!"<<endl;
}
