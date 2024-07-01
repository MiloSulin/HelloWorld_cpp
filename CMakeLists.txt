cmake_minimum_required(VERSION 3.5.0)
project(helloworld VERSION 0.1.0 LANGUAGES CXX)

add_executable(helloworld src/Hello.cpp src/main.cpp)

target_include_directories(helloworld
    PRIVATE ${PROJECT_SOURCE_DIR}/include
)

#################################################################
# Install
#################################################################
if(WIN32)
    install(TARGETS helloworld
        DESTINATION ${PROJECT_SOURCE_DIR}/build-win/HelloWorld-win
    )

    install(FILES /usr/lib/gcc/x86_64-w64-mingw32/13-win32/libstdc++-6.dll /usr/lib/gcc/x86_64-w64-mingw32/13-win32/libgcc_s_seh-1.dll
        DESTINATION ${PROJECT_SOURCE_DIR}/build-win/HelloWorld-win
    )
endif()

