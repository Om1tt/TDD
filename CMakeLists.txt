cmake_minimum_required(VERSION 3.30)
project(HabitTracker)

set(CMAKE_CXX_STANDARD 20)

add_executable(HabitTracker main.cpp
        src/HabitManager.cpp
        src/HabitManager.h
        tests/HabitManagerTest.cpp)

# Подключение GoogleTest
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Тесты
add_executable(HabitTracker_tests tests/HabitManagerTest.cpp src/HabitManager.cpp)
target_link_libraries(HabitTracker_tests gtest_main)

include(GoogleTest)
gtest_discover_tests(HabitTracker_tests)
