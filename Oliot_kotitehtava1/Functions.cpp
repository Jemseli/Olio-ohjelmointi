#include <iostream>
#include <iomanip>
#include "Functions.h"

//funktio calcSum ottaa vastaan kaksi kokonaislukua ja tulostaa niiden summan, mutta ei palauta mitään.
void calcSum(int a, int b){
    std::cout<<"Summa on "<<a+b<<std::endl;
}

//funktio calcDiv ottaa vastaan kaksi kokonaislukua ja tulostaa niiden osamäärän, mutta ei palauta mitään
//jos jakaja on nolla calcDiv tulostaa virheilmoituksen.
void calcDiv(int a, int b){
    if(b==0){
        std::cout<<"Virhe! Jakaja ei voi olla nolla"<<std::endl;
    }
    else{
        float result=a/b;
        std::cout<<"Osamaara on "<<result<<std::endl;
    }
}

//funktio retSum ottaa vastaan kaksi kokonaislukua ja palauttaa niiden summan, mutta ei tulosta mitään
int retSum(int a, int b){
    return a+b;
}

//funktio retDiv ottaa vastaan kaksi kokonaisluka ja palauttaa niiden osamäärän (float), mutta ei tulosta mitään
//jos jakaja on nolla retDiv tulostaa virheilmoituksen ja palauttaa nollan
float retDiv(int a, int b){
    if(b==0){
        std::cout<<"Virhe! Jakaja ei voi olla nolla"<<std::endl;
        return 0.0f;
    }
    else{
        return a/b;
    }
}

int main(){
    int a, b;

//Pyydetään käyttäjältä luvut a ja b
    std::cout<<"Anna luku a ";
    std::cin>>a;
    std::cout<<"Anna luku b ";
    std::cin>>b;

//Lasketaan summa ja osamäärä
    calcSum(a,b);
    calcDiv(a,b);

//Palautetaan summa ja osamäärä
    int sum=retSum(a,b);
    float division=retDiv(a,b);

    return 0;
}
