
#include "AirTransport.h"
AirTransport::AirTransport( std::string name, double velocity, double path) : Transport(name, velocity, path) {
    this->name = name;
    this->velocity = velocity;
    this->path = path;
}
void AirTransport::setCanGo(){
    canGo = false;
};
void AirTransport::setCanFly(){
    canFly = true;
};

bool AirTransport::getCanGo(){
    return canGo;
};
bool AirTransport::getCanFly(){
    return canFly;
};