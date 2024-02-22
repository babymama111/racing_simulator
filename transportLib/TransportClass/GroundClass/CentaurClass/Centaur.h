#pragma once
#include "../GroundTransport.h"

class Centaur : public GroundTransport {
public:
    Centaur(double path);
    double getTime() override;
};




