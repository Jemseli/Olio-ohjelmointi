cmake_minimum_required(VERSION 3.5)

project(viikkotehtava3_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(viikkotehtava3_1 Chef.cpp
    Chef.h
    italianchef.h italianchef.cpp
    main.cpp)

include(GNUInstallDirs)
install(TARGETS viikkotehtava3_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
