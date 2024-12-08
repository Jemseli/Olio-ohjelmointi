#ifndef AGGREGATIONA_H
#define AGGREGATIONA_H

#include "classB.h"
#include <string>
using namespace std;

class AggregationA {
public:
    AggregationA(ClassB &value);
    string getinfoB();
    void setinfoB(string value);

private:
    ClassB &refB;
};

#endif // AGGREGATIONA_H
