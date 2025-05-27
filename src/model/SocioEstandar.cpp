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

#include "SocioEstandar.hpp"

SocioEstandar::SocioEstandar(
    int numeroSocio,
    const std::string& nombre,
    const std::string& nif,
    Seguro nuevoSeguro)
    : Socio(numeroSocio, nombre)
    , nif(nif)
    , seguro(nuevoSeguro)
{
}

double SocioEstandar::calcularCuotaMensual() const
{
    return 10.0;
}

double SocioEstandar::calcularPrecioExcursion(double precioExcursion) const
{
    return precioExcursion + seguro.getPrecio();
}

std::string SocioEstandar::getNif() const
{
    return nif;
}

Seguro SocioEstandar::getSeguro() const
{
    return seguro;
}

std::string SocioEstandar::getTipo() const
{
    return "Estandar";
}
