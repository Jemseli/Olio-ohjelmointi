#ifndef ASSOSIATIONA_H
#define ASSOSIATIONA_H

#include "classB.h"
#include <string>
using namespace std;

class AssosiationA {
public:
    AssosiationA(ClassB value);
    string getInfoB();
    void setinfoB(string value);

private:
    ClassB objectB;
};

#endif // ASSOSIATIONA_H
