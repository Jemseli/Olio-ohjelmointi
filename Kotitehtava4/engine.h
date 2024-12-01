#ifndef ENGINE_H
#define ENGINE_H

class Engine {
public:
    Engine();
    Engine(int hp, double dis);
    int getHorsepower() const;
    void setHorsepower(int hp);
    double getDisplacement() const;
    void setDisplacement(double dis);

private:
    int horsepower;
    double displacement;
};

#endif // ENGINE_H
