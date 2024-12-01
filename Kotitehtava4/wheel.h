#ifndef WHEEL_H
#define WHEEL_H
#include <string>

using namespace std;

class Wheel {
public:
    Wheel();
    Wheel(int s, string t);

    int getSize() const;
    void setSize(int s);
    string getType() const;
    void setType(string t);

private:
    int size;
    string type;
};

#endif // WHEEL_H
