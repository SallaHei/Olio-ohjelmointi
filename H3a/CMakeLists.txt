cmake_minimum_required(VERSION 3.19)
project(H3a LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(H3a
    main.cpp
    chef.h chef.cpp
    italianchef.h italianchef.cpp
)

target_link_libraries(H3a
    PRIVATE
        Qt::Core
)

install(TARGETS H3a
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
