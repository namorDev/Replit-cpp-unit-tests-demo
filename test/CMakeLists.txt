cmake_minimum_required(VERSION 3.14)
project(demo_unit_test)

# From: https://google.github.io/googletest/quickstart-cmake.html

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  demo_unit_test_app
  Calculator_test.cpp
  TemperatureSensor_test.cpp
  ${CMAKE_CURRENT_LIST_DIR}/../src/Calculator.cpp
  ${CMAKE_CURRENT_LIST_DIR}/../src/TemperatureSensor.cpp
)
target_link_libraries(
    demo_unit_test_app
  GTest::gtest_main
  GTest::gmock_main
)

target_include_directories(demo_unit_test_app PUBLIC ${CMAKE_CURRENT_LIST_DIR}/../src ${CMAKE_CURRENT_LIST_DIR}/test_doubles)

include(GoogleTest)
gtest_discover_tests(demo_unit_test_app)