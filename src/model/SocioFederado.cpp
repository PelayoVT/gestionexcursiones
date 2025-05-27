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

#include "SocioFederado.hpp"

SocioFederado::SocioFederado(
    int numeroSocio,
    const std::string& nombre,
    const std::string& nif,
    const Federacion& federacion)
    : Socio(numeroSocio, nombre)
    , nif(nif)
    , federacion(federacion)
{
}

double SocioFederado::calcularPrecioExcursion(double precioBase) const
{
    return precioBase * 0.90;
}

double SocioFederado::calcularCuotaMensual() const
{
    return 10.0 * 0.95;
}

std::string SocioFederado::getTipo() const
{
    return "Federado";
}

std::string SocioFederado::getNif() const
{
    return nif;
}

Federacion SocioFederado::getFederacion() const
{
    return federacion;
}
