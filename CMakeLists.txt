cmake_minimum_required(VERSION 3.12)
project(animalShelter)

set(CMAKE_CXX_STANDARD 14)

add_executable(animalShelter main.cpp Animal.cpp Animal.h Cat.cpp Cat.h Dog.cpp Dog.h)