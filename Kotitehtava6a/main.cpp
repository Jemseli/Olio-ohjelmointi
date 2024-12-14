#include <iostream>
#include <QCoreApplication>
#include "myclass.h"

using namespace std;

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    MyClass obj;
    obj.raiseMySignal();

    return 0;
}
