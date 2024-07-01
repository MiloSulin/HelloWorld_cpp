cmake_minimum_required(VERSION 3.5.0)
project(helloworld VERSION 0.1.0 LANGUAGES CXX)

add_executable(helloworld src/Hello.cpp src/main.cpp)

target_include_directories(helloworld
    PRIVATE ${PROJECT_SOURCE_DIR}/include
)

#################################################################
# Install
#################################################################

