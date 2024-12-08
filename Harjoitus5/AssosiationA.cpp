#include "AssosiationA.h"

AssosiationA::AssosiationA(ClassB value):objectB(value) {}

    string AssosiationA::getInfoB() {
        return objectB.getInfo();
    }

    void AssosiationA::setinfoB(string value) {
        objectB.setInfo(value);
    }
