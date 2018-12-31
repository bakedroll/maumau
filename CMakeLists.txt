cmake_minimum_required (VERSION 2.8.11)

include("CMake/scripts.cmake")

set(PROJECT_NAME maumau)
set(MAULIB_NAME mauLib)
set(MAUGAME_NAME mauGame)

project(${PROJECT_NAME})

add_subdirectory(${MAULIB_NAME})
add_subdirectory(${MAUGAME_NAME})

configure_file(_clang-format ${CMAKE_BINARY_DIR}/_clang-format COPYONLY)