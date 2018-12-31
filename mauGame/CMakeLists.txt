add_source_directory(EXE_SOURCE src)

add_executable(${MAUGAME_NAME} ${EXE_SOURCE})

set_target_properties(${MAUGAME_NAME} PROPERTIES DEBUG_POSTFIX "d")

target_include_directories(${MAUGAME_NAME} PUBLIC
  ${CMAKE_SOURCE_DIR}/${MAULIB_NAME}/include)

target_link_libraries(${MAUGAME_NAME} ${MAULIB_NAME})