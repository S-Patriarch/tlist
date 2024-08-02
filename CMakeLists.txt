cmake_minimum_required(VERSION 3.25)
project(tlist)
set(CMAKE_BUILD_TYPE Release)
set(SOURCES
  main.cc
  check_files.cc
  out_info_logo.cc
  out_info_help.cc
  enter_command.cc
  add_entry.cc
  view_entry.cc
)
add_executable(${PROJECT_NAME} ${SOURCES})
set_target_properties(
  ${PROJECT_NAME} PROPERTIES
  CXX_STANDARD 17
  CXX_STANDARD_REQUIRED ON
)
