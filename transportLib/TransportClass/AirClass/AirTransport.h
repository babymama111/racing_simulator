#pragma once
#include "../Transport.h"

class AirTransport : public Transport {
public:
    bool getCanGo();
    bool getCanFly();

protected:
    AirTransport(std::string name, double velocity, double path);
    void setCanGo();
    void setCanFly();
    double coefficient;
};

