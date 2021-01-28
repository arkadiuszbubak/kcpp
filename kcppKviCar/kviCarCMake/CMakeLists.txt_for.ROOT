#----------------------------------------------
# author: A.Bubak (arkadiusz@bubak.pl)
# date: 2019.02.27
# v0.01
#----------------------------------------------


#--- CMakeLists.txt for CarFactory package.
cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(carfactory)


#--- You need to tell CMake where to find the ROOT installation.
#list(APPEND CMAKE_PREFIX_PATH $ENV{ROOTSYS})


#---Locate the ROOT package and defines a number of variables (e.g. ROOT_INCLUDE_DIRS)
#find_package(ROOT REQUIRED COMPONENTS RIO)


#---Set global variables e.g. where sources and includes are
file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cxx)
file(GLOB headers ${PROJECT_SOURCE_DIR}/include/*.h)


#---Define useful ROOT functions and macros (e.g. ROOT_GENERATE_DICTIONARY)
#include(${ROOT_USE_FILE})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
#ROOT_GENERATE_DICTIONARY(G__carfactory ${headers} LINKDEF carfactoryLinkDef.h)


#---Create a shared library with generated dictionary
add_library(carfactory SHARED CarFactory.cxx ${sources})
#target_link_libraries(carfactory ${ROOT_LIBRARIES})


#---Create  a main program using the library
add_executable(CarFactory CarFactory.cxx)
target_link_libraries(CarFactory carfactory)


#---Make place for bin and library
#install(TARGETS CarFactory DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/../CarFactory.run/bin)
#install(TARGETS lcarfactory DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/../CarFactory.run/lib)
