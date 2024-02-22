#include "Centaur.h"

Centaur::Centaur(double path) : GroundTransport ("Кентавр", 15, path, 8) {
    this->setNum(4);
}

double Centaur::getTime() {
    int timeOfPath = static_cast<int>(path / velocity);
    int countOfRelax = static_cast<int>(timeOfPath / timeBeforeRelax);
    if (timeOfPath % static_cast<int>(timeBeforeRelax) == 0) {
        countOfRelax--;
    }
    double fullTime = 0;
    for (int i = 0; i <= countOfRelax - 1; i++) {
            fullTime += 2;
    }
    fullTime += timeOfPath;
    return fullTime;
}
