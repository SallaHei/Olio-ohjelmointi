
#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
private:
    int horsepower;
    double displacement;

public:
    Engine();
    Engine(int hp, double disp);

    int getHorsepower();
    void setHorsepower(int hp);

    double getDisplacement();
    void setDisplacement(double disp);
};

#endif
