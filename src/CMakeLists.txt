cmake_minimum_required(VERSION 3.5)

add_executable(gestion-excursiones main.cpp
    model/Socio.hpp model/Socio.cpp
    model/SocioEstandar.hpp model/SocioEstandar.cpp
    model/Seguro.hpp model/Seguro.cpp
    model/Federacion.hpp model/Federacion.cpp
    model/SocioFederado.hpp model/SocioFederado.cpp
    model/SocioInfantil.hpp model/SocioInfantil.cpp
    model/Inscripciones.hpp model/Inscripciones.cpp
    controller/ExcursionController.hpp controller/ExcursionController.cpp
)
add_library(gestion-excursiones-lib SHARED model/Excursion.hpp model/Excursion.cpp)

target_include_directories(gestion-excursiones-lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(gestion-excursiones PRIVATE gestion-excursiones-lib)

include(GNUInstallDirs)
install(TARGETS gestion-excursiones
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
