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

#pragma once
#include <memory>
#include <string>
#include <vector>
#include "../model/Excursion.hpp"

class ExcursionController
{
private:
    std::vector<std::shared_ptr<Excursion>> excursiones;

public:
    void añadirExcursion(
        const std::string& codigo,
        const std::string& descripcion,
        const std::string& fecha,
        int numeroDias,
        double precio);

    std::vector<std::shared_ptr<Excursion>> dameExcursionesPorFecha(
        const std::string& desde,
        const std::string& hasta) const;

    std::shared_ptr<Excursion> buscarPorCodigo(const std::string& codigo) const;

    const std::vector<std::shared_ptr<Excursion>>& getTodas() const;
    void cargarDesdeArchivo(const std::string& ruta);
    void guardarEnArchivo(const std::string& ruta) const;
};
