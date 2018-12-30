cmake_minimum_required (VERSION 2.8.11)

include("CMake/scripts.cmake")

set(PROJECT_NAME maumau)
set(DEMO_NAME Demo)

project(${PROJECT_NAME})

add_source_directory(DEMO_SOURCE src)

add_executable(${DEMO_NAME} ${DEMO_SOURCE})
