#pragma once
#include "../GroundTransport.h"

class FastCamel : public GroundTransport {
public:
    FastCamel(double path);
    double getTime() override;
};