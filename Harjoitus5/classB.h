#ifndef CLASSB_H
#define CLASSB_H
#include <string>

using namespace std;

class ClassB {
public:
    void setInfo(string value);
    string getInfo();

private:
    string info;
};

#endif // CLASSB_H
