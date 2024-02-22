#pragma once
#include "../AirTransport.h"


class Eagle : public AirTransport {
public:
    Eagle(double path);
    double getTime() override;
};