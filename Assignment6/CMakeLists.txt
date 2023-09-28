cmake_minimum_required(VERSION 3.8.1 FATAL_ERROR)

set(TARGET_NAME "Assignment6_C++")
set (PROJECT_INSTALL_SUFFIX "${CMAKE_CURRENT_BINARY_DIR}/../../install/bin")

project(${TARGET_NAME})

# enable folders
set_property(GLOBAL PROPERTY USE_FOLDERS TRUE)

message(${CMAKE_CURRENT_BINARY_DIR})
include_directories(
   inc
)
add_executable(Assignment6 inc/Header_Assignment6.h src/Source_Assignment6.cpp)

install(TARGETS Assignment6 DESTINATION  ${PROJECT_INSTALL_SUFFIX})