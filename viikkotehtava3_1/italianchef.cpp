#include "italianchef.h"

using namespace std;

ItalianChef::ItalianChef(const string& name):Chef(name) {
    cout<<"ItalianChef "<<name<<" konstruktori"<<endl;
}

ItalianChef::~ItalianChef(){
    cout<<"ItalianChef "<<name<<" destruktori"<<endl;
}

void ItalianChef::makePasta() const{
    cout<<"ItalianChef"<<name<<" makes pasta"<<endl;
}

string ItalianChef::getName() const{
    return name;
}
