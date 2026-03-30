# \author: Arkadiusz Bubak arkadiusz@bubak.pl
# \date 2020.02.21 (v.0.01)
# \brief Kurs C++
# \version v0.03 (2026.03.30, v0.03)

# Minimum required CMake version
cmake_minimum_required(VERSION 3.14)

# Project name, version, and languages
project(kcpp
    VERSION 0.02
    LANGUAGES CXX
    DESCRIPTION "Kurs C++ Project"
)

# Set default build type to Debug if not specified
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build." FORCE)
endif()

# Enable C++ standard and require it
set(CMAKE_CXX_STANDARD 14) # Prefer C++14, TODO: change to c++20 standard
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Platform-specific compiler flags
if(MSVC)
  # Flags for MSVC (Visual Studio)
  add_compile_options(/W3 /WX)
else()
  # Flags for GCC/Clang
  add_compile_options(-Wall -Wextra -Wpedantic -Wno-unused-variable)
endif()

# WYSZUKIWANIE PLIKÓW ŹRÓDŁOWYCH
# ------------------------------------------------------------------------------
file(GLOB_RECURSE APP_SOURCES CONFIGURE_DEPENDS "src/*.cc")

if(NOT APP_SOURCES)
  message(FATAL_ERROR "Nie znaleziono plików źródłowych w katalogu 'src'!")
else()
  message(STATUS "Znaleziono pliki źródłowe. CMake śledzi zmiany w katalogu 'src'.")
endif()


# SEKCJA TWORZENIA BIBLIOTEK (ZAKOMENTOWANA)
# ------------------------------------------------------------------------------
# foreach(sourcefile ${APP_SOURCES})
#     get_filename_component(lib_name ${sourcefile} NAME_WE)
#     set(library_name "${lib_name}_lib")
#     add_library(${library_name} SHARED ${sourcefile})
#     target_include_directories(${library_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
#     install(TARGETS ${library_name}
#         LIBRARY DESTINATION lib
#         ARCHIVE DESTINATION lib
#     )
# endforeach()
# ------------------------------------------------------------------------------



# TWORZENIE PLIKÓW WYKONYWALNYCH
# ------------------------------------------------------------------------------
foreach(sourcefile ${APP_SOURCES})
  get_filename_component(target_name ${sourcefile} NAME_WE)
  add_executable(${target_name} ${sourcefile})
  target_include_directories(${target_name} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

  # target_link_libraries(${target_name} PRIVATE "${target_name}_lib")
endforeach()
