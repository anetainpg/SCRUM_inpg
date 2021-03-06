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

set(SOURCES_FILES_TESTS
        test/tests.cpp
        )

add_executable(SCRUM_inpg_test ${SOURCE_FILES} ${SOURCES_FILES_TESTS} test/main_gtest.cpp)

target_include_directories(inpg_2__test PUBLIC
        ../../googletest-master/googlemock/include
        ../../googletest-master/googletest/include
        )

add_subdirectory(../../googletest-master googletest-master)

target_link_libraries(SCRUM_inpg_test gmock)
