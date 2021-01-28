#----------------------------------------------
# author: A.Bubak (arkadiusz@bubak.pl)
# date: 2019.02.27
# v0.01
#----------------------------------------------


#--- CMakeLists.txt for CarFactory package.
cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(carfactory)

#---Set global variables e.g. where sources and includes are
file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cxx)
#file(GLOB headers ${PROJECT_SOURCE_DIR}/include/*.h)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

#---Create a shared library with generated dictionary
add_library(carfactory SHARED CarFactory.cxx ${sources})

#---Create  a main program using the library
add_executable(CarFactory CarFactory.cxx)
target_link_libraries(CarFactory carfactory)

