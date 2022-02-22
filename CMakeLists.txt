cmake_minimum_required(VERSION 3.10)

project(Canasta VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost 1.78.0 COMPONENTS system)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(canasta src/Application.cpp src/include/jsoncpp.cpp)
    target_link_libraries(canasta ${Boost_LIBRARIES})
endif()
