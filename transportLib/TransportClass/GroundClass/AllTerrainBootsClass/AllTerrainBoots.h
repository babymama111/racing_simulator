#pragma once
#include "../GroundTransport.h"

class AllTerrainBoots : public GroundTransport {
public:
    AllTerrainBoots(double path);
    double getTime() override;
};


