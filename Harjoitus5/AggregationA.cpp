#include "AggregationA.h"

AggregationA::AggregationA(ClassB &value):refB(value) {}

string AggregationA::getinfoB() {
    return refB.getInfo();
}

void AggregationA::setinfoB(string value) {
    refB.setInfo(value);
}
