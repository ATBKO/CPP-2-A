cmake_minimum_required(VERSION 3.16)
project(Ex2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Ex2 Demo.cpp TestCounter.cpp doctest.h sources/game.hpp sources/player.hpp sources/card.cpp sources/game.cpp sources/player.cpp Test.cpp)
