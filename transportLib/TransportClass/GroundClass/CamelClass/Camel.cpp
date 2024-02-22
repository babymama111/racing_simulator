#include "Camel.h"

Camel::Camel(double path) : GroundTransport ("Верблюд", 10, path, 30) {
    this->setNum(3);
}

double Camel::getTime() {
    int timeOfPath = static_cast<int>(path / velocity);
    int countOfRelax = static_cast<int>(timeOfPath / timeBeforeRelax);
    if (timeOfPath % static_cast<int>(timeBeforeRelax) == 0) {
        countOfRelax--;
    }
    double fullTime = 0;
    for (int i = 0; i <= countOfRelax - 1; i++) {
        if (i == 0) {
            fullTime += 5;
        } else {
            fullTime += 8;
        }
    }
    fullTime += timeOfPath;
    return fullTime;
}
