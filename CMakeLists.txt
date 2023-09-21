cmake_minimum_required(VERSION 3.5)
project(ghc-test LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(vendor/filesystem)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ghc_filesystem)
