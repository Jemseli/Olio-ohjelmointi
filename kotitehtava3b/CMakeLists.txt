cmake_minimum_required(VERSION 3.5)

project(kotitehtava3b LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(kotitehtava3b main.cpp
    Animal.h Animal.cpp
    Dog.h Dog.cpp)

include(GNUInstallDirs)
install(TARGETS kotitehtava3b
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
