#ifndef CHEF_H
#define CHEF_H
#include <iostream>
#include <string>
using namespace std;

class Chef{
public:
    Chef(const string& name);
    virtual ~Chef();
    virtual void makeSalad() const;
    virtual void makeSoup() const;

protected:
    string name;
};

#endif // CHEF_H
