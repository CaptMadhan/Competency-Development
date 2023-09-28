cmake_minimum_required(VERSION 3.8.1 FATAL_ERROR)

set(TARGET_NAME "CompetencyDevelopment_C++")
set (PROJECT_INSTALL_SUFFIX "${CMAKE_CURRENT_BINARY_DIR}/../install/bin")

project(${TARGET_NAME})

# enable folders
set_property(GLOBAL PROPERTY USE_FOLDERS TRUE)

message(${CMAKE_CURRENT_BINARY_DIR})
include_directories(
   inc
)
add_executable(Assignment inc/Header.h src/Source.cpp)
add_subdirectory(Assignment6)

install(TARGETS Assignment DESTINATION  ${PROJECT_INSTALL_SUFFIX})
