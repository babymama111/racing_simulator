#include <iostream>
#include <string>
#include "racingChanger/racingChangerFunc.h"
#include "racingDist/racingDistFunc.h"
#include "racingRegistration/racingRegistrationFunc.h"
#include "TransportFacade.h"

void massivOutput(std::vector<Transport*> mass);
int main() {
    std::string input = "0";
    do {
        int numOfRacing = racingChangerFunc();
        int dist = racingDistFunc();
        std::cout << "Гонка для ";
        switch (numOfRacing) {
            case 1:
                std::cout << "наземного транспорта. ";
                break;
            case 2:
                std::cout << "воздушного транспорта. ";
                break;
            case 3:
                std::cout << "наземного и воздушного транспорта. ";
                break;
        }
        std::cout << "Расстояние: " << dist;
        std::vector<Transport*> registeredVehicles;
        std::string a = "0";
        racingRegistrationFunc(registeredVehicles,dist,numOfRacing);
        do {
            std::cout << "1. Зарегистрировать транспорт\n2. Начать гонку\nВыберите действие: ";
            std::cin >> a;
            if((a != "1") && (a != "2")  ){
                std::cout << "Введите ликвидное действие: ";
            } else if(a == "1"){
                racingRegistrationFunc(registeredVehicles,dist,numOfRacing);
            } else if(a == "2"){
                continue;
            }
        } while ((a != "2"));
        massivOutput(registeredVehicles);
        std::cout << "\n\n\n1. Провести ещё одну гонку(введите любой символ)\n2. Выйти(Введите: 2)\nВыберите действие:";
        std::cin >> input;
    } while(input != "2");
    return 0;
}
void massivOutput(std::vector<Transport*> mass){
    std::cout <<"\nРезультаты гонки: \n";
    for(int a = 1;const auto& vehicle : mass){
        std::cout<<"\n"<< a <<". "<<vehicle->getName() <<": "<< vehicle->getTime();
        a++;
    }
};
