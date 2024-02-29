cmake_minimum_required(VERSION 3.28)

project(RPS)

add_executable(RPS main.cpp)

target_link_directories(RPS PRIVATE ./game/build/)

target_link_libraries(RPS game-lib)
