#pragma once
#include <iostream>
class Transport{
public:
    std::string getName();
    void setNum(int num);
    int getNum();
    bool getIsEmpty();
    virtual double getTime() = 0;


protected:
    std::string name;
    double velocity;
    double path;
    bool canGo{};
    bool canFly{};
    Transport(std::string name, double velocity, double path);
    int num{};
    bool isEmpty{};

};

