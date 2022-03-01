cmake_minimum_required(VERSION 3.21)
project(ENSFlipFlop)

set(CMAKE_CXX_STANDARD 14)

add_executable(ENSFlipFlop main.cpp state.cpp state.h stateon.cpp stateon.h stateoff.cpp stateoff.h flipflop.cpp flipflop.h)
