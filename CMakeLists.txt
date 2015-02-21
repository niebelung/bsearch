cmake_minimum_required(VERSION 2.8)

project(bsearch)

set(SRC main.c
        bsearch.c)

set(HDR bsearch.h)

set (CMAKE_C_FLAGS "-std=c99")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/../bin)



set(BINNAME bsearch_test)

add_executable(${BINNAME} ${SRC} ${HDR})
