cmake_minimum_required(VERSION 3.25)

project(
    Gyrfalcon-Compiler
    VERSION 0.1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(LLVM 18 REQUIRED CONFIG)
include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

add_executable(gyrfalcon-compiler main.cpp)
llvm_map_components_to_libnames(
    llvm_libs
    core
    support
    native
)
target_link_libraries(
    gyrfalcon-compiler
    PRIVATE
    ${llvm_libs}
)

add_subdirectory(installer)
