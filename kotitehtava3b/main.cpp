#include <iostream>
#include "Animal.h"
#include "Dog.h"

using namespace std;

int main() {
    Animal*animal=new Animal();
    animal->callOut();
    delete animal;

    Animal*dog=new Dog;
    dog->callOut();
    delete dog;

    return 0;
}
