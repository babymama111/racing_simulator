#include <iostream>
#include <string>

int racingDistFunc(){
    std::cout << "Укажите длину дистанции(должна быть положительной):  ";
    std::string dist;
    int distance;
    while (true){
        std::cin >> dist;
        try {
            distance = std::stoi(dist);
            if(distance <= 0 ){
                std::cout << "Дистанция должна быть положительной, повторите ввод: ";
                continue;
            } else{
                break;
            }
        } catch (std::invalid_argument&) {
            std::cout << "Некорректный ввод. Пожалуйста, введите число: ";
        } catch (std::out_of_range&) {
            std::cout << "Введенное число слишком большое. Пожалуйста, введите меньшее число: ";
        }
    }
    return distance;
}

