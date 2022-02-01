cmake_minimum_required(VERSION 3.20)
project(Matala2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Matala2 main.cpp MyCar.cpp MyCar.h Node.cpp Node.h ManageCar.cpp ManageCar.h)
