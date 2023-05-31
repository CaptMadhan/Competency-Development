cmake_minimum_required(VERSION 3.8.1 FATAL_ERROR)

set(TARGET_NAME "CompetencyDevelopment_C++")

project(${TARGET_NAME})
include_directories(
   inc
)
add_executable(Assignment inc/Header.h src/Source.cpp)
