#include "CarpetPlane.h"
CarpetPlane::CarpetPlane(double path) : AirTransport( "Ковер - самолет",  10,  path){
    this->setNum(7);
};

double CarpetPlane::getTime(){
    if(this->path < 1000) this->coefficient = 1;
    else if(this->path < 5000) this->coefficient = 0.97;
    else if(this->path < 10000) this->coefficient = 0.90;
    else if(this->path >= 10000) this->coefficient = 0.95;
    double time_no_reduction = this->path/velocity;
    return time_no_reduction * coefficient;
}
