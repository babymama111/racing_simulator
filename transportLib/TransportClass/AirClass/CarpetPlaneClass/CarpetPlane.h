#pragma once
#include "../AirTransport.h"

class CarpetPlane : public AirTransport {
public:
    CarpetPlane(double path);
    double getTime() override;
};
