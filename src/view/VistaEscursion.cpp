/**
 * @par Copyright:
 *   This source code is covered by intellectual property rights and its
 *   distribution is limited to Indra. Other disclosure requests for this
 *   information are subject to the prior written approval of the parties
 *   listed above.
 *
 * @file
 *   file.extension
 *
 * @version
 *   REV
 *
 * @date
 *   dd/mm/yyyy
 *
 * @author
 *   userName
 *
 * @brief
 *   explanation of the class
 */

#include <iostream>
#include "controller/ExcursionController.hpp"

void mostrarMenu()
{
    std::cout << "\n--- MENÚ PRINCIPAL ---\n";
    std::cout << "1. Añadir excursión\n";
    std::cout << "2. Listar excursiones entre fechas\n";
    std::cout << "0. Salir\n";
    std::cout << "Opción: ";
}

int main()
{
    ExcursionController controller;
    controller.cargarDesdeArchivo("excursiones.txt");

    int opcion;
    do
    {
        mostrarMenu();
        std::cin >> opcion;

        if (opcion == 1)
        {
            std::string codigo, descripcion, fecha;
            int dias;
            double precio;

            std::cin.ignore();
            std::cout << "Código: ";
            std::getline(std::cin, codigo);
            std::cout << "Descripción: ";
            std::getline(std::cin, descripcion);
            std::cout << "Fecha (YYYY-MM-DD): ";
            std::getline(std::cin, fecha);
            std::cout << "Número de días: ";
            std::cin >> dias;
            std::cout << "Precio: ";
            std::cin >> precio;

            controller.añadirExcursion(codigo, descripcion, fecha, dias, precio);
            controller.guardarEnArchivo("excursiones.txt");
        }
        else if (opcion == 2)
        {
            std::string desde, hasta;
            std::cin.ignore();
            std::cout << "Desde (YYYY-MM-DD): ";
            std::getline(std::cin, desde);
            std::cout << "Hasta (YYYY-MM-DD): ";
            std::getline(std::cin, hasta);

            auto lista = controller.dameExcursionesPorFecha(desde, hasta);
            for (const auto& e : lista)
            {
                std::cout << e->getCodigo() << " - " << e->getDescripcion() << " - "
                          << e->getFecha() << " - " << e->getNumeroDias() << " días - "
                          << e->getPrecio() << "€\n";
            }
        }

    } while (opcion != 0);

    std::cout << "Hasta pronto :)\n";
    return 0;
}
