#pragma once
#include "../Transport.h"

class GroundTransport : public Transport {
public:
    bool getCanGo();
    bool getCanFly();
protected:
    double timeBeforeRelax;
    GroundTransport(std::string name, double velocity, double path, double timeBeforeRelax);
    void setCanGo();
    void setCanFly();
};

