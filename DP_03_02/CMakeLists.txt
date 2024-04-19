cmake_minimum_required(VERSION 3.5)

project(DP_03_02 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HEADERS_LIST
    observedworker.h
    observer.h
    warningobserver.h
    errorobserver.h
    fatalerrorobserver.h
    )
set(SRC_LIST
    observedworker.cpp
    warningobserver.cpp
    errorobserver.cpp
    fatalerrorobserver.cpp
    )

add_executable(${PROJECT_NAME} main.cpp ${HEADERS_LIST} ${SRC_LIST})
