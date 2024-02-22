#include "racingChangerFunc.h"
#include <iostream>
int racingChangerFunc(){
    std::string type = "0";
    std::cout << "Добро пожаловать в гоночный симулятор! " << std::endl;
    std::cout << "1. Гонка для наземного транспорта " << std::endl;
    std::cout << "2. Гонка для воздушного транспорта " << std::endl;
    std::cout << "3. Гонка для наземного и воздушного транспорта " << std::endl;
    std::cout << "Выберите тип гонки:  " ;
    while ((type != "1") && (type != "2") && (type != "3" )){
        std::cin >> type;
        if((type != "1") && (type != "2") && (type != "3" ) ){
            std::cout << "Введите ликвидный тип гонки: ";
        }
    }
    int numOfRacing = std::stoi(type);
    return numOfRacing;
}