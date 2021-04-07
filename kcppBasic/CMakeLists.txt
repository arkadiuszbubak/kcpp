#
# \author: Arkadiusz Bubak arkadiusz@bubak.pl
# \date 2020.02.21
# \brief Kurs C++
# \version v0.02

cmake_minimum_required(VERSION 2.8)
project(kcpp)

#set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O0 -Wno-unused-variable")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -O0 -Wno-unused-variable -Wliteral-conversion")


#----------------------------------------------------------------------
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++14" COMPILER_SUPPORTS_CXX14)
if(COMPILER_SUPPORTS_CXX14)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
elseif(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
  message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11(14) support. Please use a different C++ compiler.")
endif()
#----------------------------------------------------------------------


#add_executable(start introduction/start.cc)
#add_executable(lsizeof src/LSizeof.cc)
#add_executable(lstatic src/LStatic.cc)
#add_executable(lstaticCast src/LStaticCast.cc)


file(GLOB_RECURSE APP_SOURCES src/*.cc)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

foreach (sourcefile ${APP_SOURCES})
    #get filename without extension (NAME_(W)ethout(E)xtenction)
    get_filename_component(filename ${sourcefile} NAME_WE)
    #add executable for all file
    add_executable(${filename} ${sourcefile})
endforeach (sourcefile ${APP_SOURCES})


# Create shared library
# add_library(${PROJECT_NAME} SHARED ${APP_SOURCES})

# Install library
# install(TARGETS ${PROJECT_NAME} DESTINATION lib/${PROJECT_NAME})

