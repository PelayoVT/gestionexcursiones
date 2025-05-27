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

#include "Socio.hpp"

Socio::Socio(int numeroSocio, const std::string& nombre)
    : numeroSocio(numeroSocio)
    , nombre(nombre)
{
}

int Socio::getNumeroSocio() const
{
    return numeroSocio;
}

std::string Socio::getNombre() const
{
    return nombre;
}
