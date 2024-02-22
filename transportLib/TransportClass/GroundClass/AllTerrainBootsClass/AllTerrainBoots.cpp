#include "AllTerrainBoots.h"

AllTerrainBoots::AllTerrainBoots(double path) : GroundTransport ("Ботинки-вездеходы", 6, path, 60){
    this->setNum(1);
}

double AllTerrainBoots::getTime() {
    int timeOfPath = static_cast<int>(path / velocity);
    int countOfRelax = static_cast<int>(timeOfPath / timeBeforeRelax);
    if (timeOfPath % static_cast<int>(timeBeforeRelax) == 0) {
        countOfRelax--;
    }
    double fullTime = 0;
    for (int i = 0; i <= countOfRelax - 1; i++) {
        if (i == 0) {
            fullTime += 10;
        } else {
            fullTime += 5;
        }
    }
    fullTime += timeOfPath;
    return fullTime;
}
