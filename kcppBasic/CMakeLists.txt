# \author: Arkadiusz Bubak arkadiusz@bubak.pl
# \date 2020.02.21
# \brief Kurs C++
# \version v0.02

# Minimum required CMake version
cmake_minimum_required(VERSION 3.14)

# Project name, version, and languages
project(kcpp
    VERSION 0.02
    LANGUAGES C CXX
    DESCRIPTION "Kurs C++ Project"
)

# Set default build type to Debug if not specified
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build." FORCE)
endif()

# Enable C++ standard and require it
set(CMAKE_CXX_STANDARD 14) # Prefer C++14
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Platform-specific compiler flags
if(MSVC)
    # Flags for MSVC (Visual Studio)
    add_compile_options(/W3 /WX) # Enable warnings and treat warnings as errors
else()
    # Flags for GCC/Clang
    add_compile_options(-Wall -Wextra -Wpedantic -Wno-unused-variable)
endif()

# Include directories (prefer target-specific includes)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Find all source files in the src directory
file(GLOB_RECURSE APP_SOURCES "src/*.cc")

# Check if any source files were found
if(NOT APP_SOURCES)
    message(FATAL_ERROR "No source files found in the 'src' directory!")
else()
    message(STATUS "Source files found")
    #message(STATUS "Source files found: ${APP_SOURCES}")
endif()

# Create a shared library for each source file
foreach(sourcefile ${APP_SOURCES})
    # Get the filename without extension
    get_filename_component(lib_name ${sourcefile} NAME_WE)

    # Use the filename as the library name (CMake will add the "lib" prefix automatically)
    set(library_name "${lib_name}_lib")  # Append "_lib" to make the name unique

    # Create a shared library for the source file
    add_library(${library_name} SHARED ${sourcefile})

    # Set target properties for the library
    target_include_directories(${library_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

    # Platform-specific compiler flags for the library
    if(MSVC)
        target_compile_options(${library_name} PRIVATE /W3 /WX)
    else()
        target_compile_options(${library_name} PRIVATE -Wall -Wextra -Wpedantic -Wno-unused-variable)
    endif()

    # Install the library to the 'lib' directory
    install(TARGETS ${library_name}
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
    )
endforeach()

# Create an executable for each source file (optional, if you still want executables)
foreach(sourcefile ${APP_SOURCES})
    # Get the filename without extension
    get_filename_component(target_name ${sourcefile} NAME_WE)

    # Add an executable for the source file
    add_executable(${target_name} ${sourcefile})

    # Set target properties (e.g., C++ standard, include directories)
    target_include_directories(${target_name} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

    # Link the executable to the corresponding shared library
    target_link_libraries(${target_name} PRIVATE "${target_name}_lib")
endforeach()
