cmake_minimum_required(VERSION 3.5)

add_executable(gestion-excursiones-test main.cpp
    model/ExcursionTest.cpp)

find_package(GTest REQUIRED)
enable_testing()
target_link_libraries(gestion-excursiones-test PRIVATE GTest::gmock
    PRIVATE GTest::gtest PRIVATE gestion-excursiones-lib)

include(GNUInstallDirs)
install(TARGETS gestion-excursiones-test
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
