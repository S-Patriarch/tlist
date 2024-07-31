cmake_minimum_required(VERSION 3.25)
project(tlist)
set(CMAKE_BUILD_TYPE Release)
set(SOURCES
   main.cc
   info_out_terminal.cc
   check_files.cc
)
add_executable(${PROJECT_NAME} ${SOURCES})
set_target_properties(
   ${PROJECT_NAME} PROPERTIES
   CXX_STANDARD 17
   CXX_STANDARD_REQUIRED ON
)
