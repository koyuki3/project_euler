cmake_minimum_required(VERSION 3.14)
project(bll_project_euler)

set(CMAKE_CXX_STANDARD 17)
set(EXE_NAME bll_project_euler)

set(EXE_SOURCES
        main.cpp
)

add_executable(${EXE_NAME} ${EXE_SOURCES})
