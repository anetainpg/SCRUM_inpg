cmake_minimum_required(VERSION 3.13)
project(SCRUM_inpg)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -Werror -Wpedantic -pedantic-errors)

include_directories(
        include
)

set(SOURCE_FILES
        src/functions.cpp
        )

add_executable(Scrum_debug ${SOURCE_FILES} main.cpp)

# == Unit testing using Google Testing Framework ==