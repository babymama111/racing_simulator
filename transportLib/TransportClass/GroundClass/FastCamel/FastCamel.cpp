#include "FastCamel.h"

FastCamel::FastCamel(double path) : GroundTransport ("Верблюд - быстроход", 40, path, 10) {
    this->setNum(6);
}
double FastCamel::getTime() {
    int timeOfPath = static_cast<int>(path / velocity);
    int countOfRelax = static_cast<int>(timeOfPath / timeBeforeRelax);
    if (timeOfPath % static_cast<int>(timeBeforeRelax) == 0) {
        countOfRelax--;
    }
    double fullTime = 0;
    for (int i = 0; i <= countOfRelax - 1; i++) {
        if (i == 0) {
            fullTime += 5;}
        else if(i == 1){
            fullTime +=6.5;
        } else {
            fullTime += 8;
        }
    }
    fullTime += timeOfPath;
    return fullTime;
}

