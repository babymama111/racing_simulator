#pragma once
#include "../GroundTransport.h"

class Camel : public GroundTransport {
public:
    Camel(double path);
    double getTime() override;
};



