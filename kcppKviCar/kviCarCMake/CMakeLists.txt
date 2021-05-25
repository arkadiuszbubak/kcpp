#----------------------------------------------
# author: A.Bubak (arkadiusz@bubak.pl)
# date: 2019.02.27
# v0.01
#----------------------------------------------


#--- CMakeLists.txt for CarFactory package.
cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(carfactory)

#---Set global variables e.g. where sources and includes are
file(GLOB SOURCES "src/*.cxx")
include_directories(include)


#---Create a shared library with generated dictionary
#add_library(${PROJECT_NAME} SHARED ${SOURCES})

#---Create  a main program using the library
#add_executable(CarFactory ${SOURCES} CarFactory.cxx)
add_executable(CarFactory ${SOURCES})
#target_link_libraries(CarFactory carfactory)

