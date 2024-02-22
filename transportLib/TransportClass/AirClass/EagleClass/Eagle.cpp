#include "Eagle.h"

Eagle::Eagle(double path) : AirTransport( "Орел",  8,  path){
    this->setNum(5);
};
double Eagle::getTime(){
    this->coefficient = 0.94;
    double time_no_reduction = this->path/velocity;
    return time_no_reduction * coefficient;
}