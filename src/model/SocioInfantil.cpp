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

#include "SocioInfantil.hpp"

SocioInfantil::SocioInfantil(int numeroSocio, const std::string& nombre, Socio& tutor)
    : Socio(numeroSocio, nombre)
    , padre(&tutor)
{
}

double SocioInfantil::calcularCuotaMensual() const
{
    return 10 * 0.50;
}

double SocioInfantil::calcularPrecioExcursion(double precioBase) const
{
    return precioBase;
}

int SocioInfantil::getNumeroSocioPadre() const
{
    return padre->getNumeroSocio();
}

std::string SocioInfantil::getTipo() const
{
    return "Infantil";
}
