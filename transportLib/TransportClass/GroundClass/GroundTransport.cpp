#include "GroundTransport.h"

GroundTransport::GroundTransport(std::string name, double velocity, double path, double timeBeforeRelax) : Transport(name, velocity, path) {
    this->timeBeforeRelax = timeBeforeRelax;
    this->name = name;
    this->velocity = velocity;
    this->path = path;
}
void GroundTransport::setCanGo(){
    canGo = true;
};
void GroundTransport::setCanFly(){
    canFly = false;
};
bool GroundTransport::getCanGo(){
    return canGo;
};
bool GroundTransport::getCanFly(){
    return canFly;
};
