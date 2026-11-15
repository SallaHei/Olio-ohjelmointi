cmake_minimum_required(VERSION 3.19)
project(h2a LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(h2a
    main.cpp
    car.h car.cpp
    rectangle.h rectangle.cpp
    student.h student.cpp
)

target_link_libraries(h2a
    PRIVATE
        Qt::Core
)

install(TARGETS h2a
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
