#pragma once
#include "../AirTransport.h"

class Broom : public AirTransport {
public:
    Broom(double path);
    double getTime() override;
};
