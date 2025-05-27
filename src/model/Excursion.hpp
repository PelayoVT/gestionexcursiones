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
#include <string>

class Excursion
{
public:
    Excursion(
        const std::string& codigo,
        const std::string& descripcion,
        const std::string& fecha,
        int numeroDias,
        double precio);

    std::string getCodigo() const;
    std::string getDescripcion() const;
    std::string getFecha() const;
    int getNumeroDias() const;
    double getPrecio() const;

    void mostrar() const;

private:
    std::string codigo;
    std::string descripcion;
    std::string fecha;
    int numeroDias;
    double precio;
};
