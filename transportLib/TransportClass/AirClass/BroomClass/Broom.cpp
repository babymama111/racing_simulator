//
// Created by user on 19.02.2024.
//

#include "Broom.h"

Broom::Broom(double path) : AirTransport("Метла", 20, path){
    this->setNum(2);
};

double Broom::getTime(){
    this->coefficient = static_cast<double>(100 - (static_cast<int>(path)/1000))/100;
    double time_no_reduction = this->path/velocity;
    return time_no_reduction * coefficient;
}
