cmake_minimum_required(VERSION 3.0.0)
project(route_checker VERSION 0.1.0)

Include(FetchContent)
FetchContent_Declare(
 googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip)

FetchContent_MakeAvailable(googletest)


include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(route_checker tests.cpp route_check.cpp route_check.h)
target_link_libraries(
  route_checker
  gtest_main
  )
include(GoogleTest)
gtest_discover_tests(route_checker)
  
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
