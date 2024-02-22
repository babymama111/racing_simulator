#include "racingRegistrationFunc.h"
#include <iostream>
#include <string>

void sortVector(std::vector<Transport*>& registeredVehicles);
bool isRegistered(std::vector<Transport*>& registeredVehicles,int choice);
bool isCanRacing(int choice,int numOfRacing);
void racingRegistrationFunc(std::vector<Transport*>& registeredVehicles, double dist,int numOfRacing){
    int choice;
    do {
        if (registeredVehicles.empty()){
            std::cout << "\n";
        }
        else{
            std::cout << "\nЗарегистрированные транспортные средства:\n";
            for (auto it = registeredVehicles.begin(); it != registeredVehicles.end(); ++it) {
                std::cout << (*it)->getName()<<"";
                if (std::next(it) != registeredVehicles.end()) {
                    std::cout << ", ";
                }
            }
        }
        std::cout << std::endl;
        std::cout << "1. Ботинки-вездеходы\n";
        std::cout << "2. Метла\n";
        std::cout << "3. Верблюд\n";
        std::cout << "4. Кентавр\n";
        std::cout << "5. Орел\n";
        std::cout << "6. Верблюд-быстроход\n";
        std::cout << "7. Ковер-самолет\n";

        std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
        std::cin >> choice;
        if (std::cin.fail()) {
            std::cout << "Ошибка ввода. Пожалуйста, введите число.\n";
            std::cin.clear(); // Сброс флагов ошибки
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистка буфера ввода
            continue; // Пропускаем текущую итерацию цикла
        }
        if(isRegistered(registeredVehicles, choice)){
            std::cout << "Такой транспорт уже зарегестрирован";
            continue;
        }
        if(!isCanRacing(choice,numOfRacing)){
            std::cout << "Нельзя зарегистрировать такой транспорт на данную гонку";
            continue;
        };
//        if((choice != 1) && (choice != 2)&& (choice != 3)&& (choice != 4)&& (choice != 5)&& (choice != 6)&& (choice != 7)&& (choice != 2) ){
//            std::cout << "Нельзя зарегистрировать такой транспорт на данную гонку";
//            continue;
//        };
        if (choice >= 1 && choice <= 7) {
            switch (choice) {
                case 1:
                    registeredVehicles.push_back(new AllTerrainBoots(dist));
                    std::cout << "Ботинки - вездеходы успешно зарешистрированы";
                    break;
                case 2:
                    registeredVehicles.push_back(new Broom(dist));
                    std::cout << "Метла успешно зарешистрирована";
                    break;
                case 3:
                    registeredVehicles.push_back(new Camel(dist));
                    std::cout << "Верблюд успешно зарешистрирован";
                    break;
                case 4:
                    registeredVehicles.push_back(new Centaur(dist));
                    std::cout << "Кентавр успешно зарешистрирован";
                    break;
                case 5:
                    registeredVehicles.push_back(new Eagle(dist));
                    std::cout << "Орел успешно зарешистрирован";
                    break;
                case 6:
                    registeredVehicles.push_back(new FastCamel(dist));
                    std::cout << "Верблюд-быстроход успешно зарешистрирован";
                    break;
                case 7:
                    registeredVehicles.push_back(new CarpetPlane(dist));
                    std::cout << "Ковер-самолет успешно зарешистрирован";
                    break;
            }
        } else if (choice != 0) {
            std::cout << "Неверный ввод. Пожалуйста, выберите существующий транспорт или 0 для завершения.\n";
        }
    } while (choice != 0);
    sortVector( registeredVehicles);
};
bool isRegistered(std::vector<Transport*>& registeredVehicles,int choice){
    bool flag = false;
    for(const auto& vehicle : registeredVehicles){
        if(vehicle->getNum() == choice){
            flag = true;
        }
    }
    return flag;
};
bool isCanRacing(int choice,int numOfRacing){
    if(numOfRacing == 3){
        return true;
    }else if(numOfRacing == 2){
        switch (choice) {
            case 1:
                return false;
            case 2:
                return true;
            case 3:
                return false;
            case 4:
                return false;
            case 5:
                return true;
            case 6:
                return false;
            case 7:
                return true;
            default:
                return true;

        }
    }else{
        switch (choice) {
            case 1:
                return true;
            case 2:
                return false;
            case 3:
                return true;
            case 4:
                return true;
            case 5:
                return false;
            case 6:
                return true;
            case 7:
                return false;
            default:
                return true;

        }
    }
};

void sortVector(std::vector<Transport*>& registeredVehicles){
    for (auto it1 = registeredVehicles.begin(); it1 != registeredVehicles.end(); it1++) {
        for (auto it2 = registeredVehicles.begin(); it2 != registeredVehicles.end(); it2++) {
            if ((*it1)->getTime() < (*it2)->getTime()) {
                std::swap(*it1, *it2);
            }

        }
    }
};