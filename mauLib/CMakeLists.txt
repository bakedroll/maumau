add_source_directory(LIB_SOURCE include/mau/core)
add_source_directory(LIB_SOURCE include/mau/player)
add_source_directory(LIB_SOURCE core)
add_source_directory(LIB_SOURCE player)

add_library(${MAULIB_NAME} ${LIB_SOURCE})

set_target_properties(${MAULIB_NAME} PROPERTIES DEBUG_POSTFIX "d")

target_include_directories(${MAULIB_NAME} PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include)