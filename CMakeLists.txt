cmake_minimum_required(VERSION 3.13)
project(nes)

set(CMAKE_CXX_STANDARD 17)

add_executable(nes main.cpp nes.cc nes.hh utils.cc utils.hh logging.cc logging.hh)

target_link_libraries(nes stdc++fs)
