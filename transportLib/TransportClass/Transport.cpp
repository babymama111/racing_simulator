#include "Transport.h"
Transport::Transport(std::string name, double velocity, double path) {
    this->name = name;
    this->velocity = velocity;
    this->path = path;
}

std::string Transport::getName() {
    return this->name;
}
void Transport::setNum(int num){
    this->num = num;
};
int Transport::getNum(){
    return this->num;
};
bool Transport::getIsEmpty(){
    return false;
};


