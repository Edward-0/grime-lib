cmake_minimum_required(VERSION 3.0.0)
project(grime-lib)

set(CMAKE_C_COMPILER /usr/bin/clang)

file(GLOB_RECURSE HEADERS ${PROJECT_SOURCE_DIR}/src/*.h)
file(GLOB_RECURSE SOURCE ${PROJECT_SOURCE_DIR}/src/*.c)
add_library(grime-lib STATIC ${HEADERS} ${SOURCE})

install(TARGETS grime-lib)
