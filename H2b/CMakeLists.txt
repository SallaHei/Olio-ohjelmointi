cmake_minimum_required(VERSION 3.19)
project(H2b LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(H2b
    main.cpp
    car.h car.cpp
)

target_link_libraries(H2b
    PRIVATE
        Qt::Core
)

install(TARGETS H2b
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
