cmake_minimum_required(VERSION 3.6)
project(3_pr)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(3_pr ${SOURCE_FILES}
        main.cpp
        safearray.h
        safearray.hpp
        subject.h
        subject.cpp
        )