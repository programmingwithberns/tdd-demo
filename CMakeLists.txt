# Minimum CMake version required
cmake_minimum_required(VERSION 3.10...3.30)

# Project name and language
project(cmake_demo LANGUAGES CXX)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)

include_directories(include)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.4.0 # or a later release
)

FetchContent_MakeAvailable(Catch2)

add_executable(tests include/functions.h src/functions.cpp tests/test.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

include(CTest)
include(Catch)
catch_discover_tests(tests)