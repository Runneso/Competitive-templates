cmake_minimum_required(VERSION 3.16)

project(temp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(Efim mainEfim.cpp)
add_executable(Max  mainMax.cpp)
add_executable(Alex mainAlex.cpp)

target_compile_definitions(Efim PRIVATE LOCAL)
target_compile_definitions(Max  PRIVATE LOCAL)
target_compile_definitions(Alex PRIVATE LOCAL)
