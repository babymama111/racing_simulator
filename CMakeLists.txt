cmake_minimum_required(VERSION 3.27)
project(racingSimulator VERSION 0.1 LANGUAGES CXX)
include_directories(transportLib)
set(CMAKE_CXX_STANDARD 20)

add_executable(racingSimulator main.cpp
        racingChanger/racingChangerFunc.cpp
        racingChanger/racingChangerFunc.h
        racingDist/racingDistFunc.cpp
        racingDist/racingDistFunc.h
        racingRegistration/racingRegistrationFunc.h
        racingRegistration/racingRegistrationFunc.cpp)
add_subdirectory(transportLib)
target_link_libraries(racingSimulator transportLib)