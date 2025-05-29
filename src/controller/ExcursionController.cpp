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

#include "ExcursionController.hpp"
#include <fstream>
#include <sstream>

void ExcursionController::añadirExcursion(
    const std::string& codigo,
    const std::string& descripcion,
    const std::string& fecha,
    int numeroDias,
    double precio)
{
    auto nueva = std::make_shared<Excursion>(codigo, descripcion, fecha, numeroDias, precio);
    excursiones.push_back(nueva);
}

std::vector<std::shared_ptr<Excursion>> ExcursionController::dameExcursionesPorFecha(
    const std::string& desde,
    const std::string& hasta) const
{
    std::vector<std::shared_ptr<Excursion>> resultado;

    for (const auto& e : excursiones)
    {
        std::string fecha = e->getFecha();
        if (fecha >= desde && fecha <= hasta)
        {
            resultado.push_back(e);
        }
    }

    return resultado;
}

std::shared_ptr<Excursion> ExcursionController::buscarPorCodigo(const std::string& codigo) const
{
    for (const auto& e : excursiones)
    {
        if (e->getCodigo() == codigo)
        {
            return e;
        }
    }
    return nullptr;
}

const std::vector<std::shared_ptr<Excursion>>& ExcursionController::getTodas() const
{
    return excursiones;
}

void ExcursionController::cargarDesdeArchivo(const std::string& ruta)
{
    std::ifstream archivo(ruta);
    if (!archivo.is_open())
        return;

    std::string linea;
    while (std::getline(archivo, linea))
    {
        std::istringstream ss(linea);
        std::string codigo, descripcion, fecha;
        int dias;
        double precio;

        std::getline(ss, codigo, ',');
        std::getline(ss, descripcion, ',');
        std::getline(ss, fecha, ',');
        ss >> dias;
        ss.ignore(1);
        ss >> precio;

        añadirExcursion(codigo, descripcion, fecha, dias, precio);
    }
    archivo.close();
}

void ExcursionController::guardarEnArchivo(const std::string& ruta) const
{
    std::ofstream archivo(ruta);
    if (!archivo.is_open())
        return;

    for (const auto& e : excursiones)
    {
        archivo << e->getCodigo() << "," << e->getDescripcion() << "," << e->getFecha() << ","
                << e->getNumeroDias() << "," << e->getPrecio() << "\n";
    }
    archivo.close();
}
