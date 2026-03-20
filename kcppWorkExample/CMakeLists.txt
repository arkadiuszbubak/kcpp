#----------------------------------------------
# author: A.Bubak (arkadiusz@bubak.pl)
# date: 2026.03.20
# v0.01
#----------------------------------------------


#--- CMakeLists.txt for CarFactory package.
cmake_minimum_required(VERSION 3.22 FATAL_ERROR)
project(workexample)

#---Set global variables e.g. where sources and includes are
file(GLOB SOURCES "src/*.cxx")
include_directories(include)


#---Create a shared library with generated dictionary
#add_library(${PROJECT_NAME} SHARED ${SOURCES})

#---Create  a main program using the library
#add_executable(CarFactory ${SOURCES} CarFactory.cxx)
add_executable(WorkExample ${SOURCES})
#target_link_libraries(CarFactory carfactory)

