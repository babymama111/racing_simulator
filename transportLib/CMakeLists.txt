cmake_minimum_required(VERSION 3.27)
project(transportLib)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(CMAKE_CXX_STANDARD 17)

add_library(transportLib SHARED TransportClass/Transport.cpp
        TransportClass/GroundClass/GroundTransport.cpp
        TransportClass/AirClass/AirTransport.cpp
        TransportClass/GroundClass/CamelClass/Camel.cpp
        TransportClass/GroundClass/FastCamel/FastCamel.cpp
        TransportClass/GroundClass/CentaurClass/Centaur.cpp
        TransportClass/GroundClass/AllTerrainBootsClass/AllTerrainBoots.cpp
        TransportClass/AirClass/EagleClass/Eagle.cpp
        TransportFacade.h
        TransportClass/AirClass/CarpetPlaneClass/CarpetPlane.cpp
        "TransportClass/AirClass/BroomClass/Broom.cpp")
