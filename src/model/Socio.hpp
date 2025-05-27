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

class Socio
{
public:
    Socio(int numeroSocio, const std::string& nombre);
    virtual ~Socio() = default;
    int getNumeroSocio() const;
    std::string getNombre() const;

    virtual double calcularCuotaMensual() const = 0;
    virtual double calcularPrecioExcursion(double precioExcursion) const = 0;

    virtual std::string getTipo() const = 0;

private:
    int numeroSocio;
    std::string nombre;
};
