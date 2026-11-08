cmake_minimum_required(VERSION 3.19)
project(H1 LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core LinguistTools)

qt_standard_project_setup()

qt_add_executable(H1
    main.cpp
)

qt_add_translations(
    TARGETS H1
    TS_FILES H1_fi_FI.ts
)

target_link_libraries(H1
    PRIVATE
        Qt::Core
)

install(TARGETS H1
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
