cmake_minimum_required(VERSION 3.20)
project(restaurant)

set(CMAKE_CXX_STANDARD 14)

add_executable(restaurant main.cpp functions.h getInfo.cpp history.cpp visuals.cpp placeOrder.cpp)