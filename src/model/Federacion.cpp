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

#include "Federacion.hpp"

Federacion::Federacion(const std::string& nombre, const std::string& codigo)
    : nombre(nombre)
    , codigo(codigo)
{
}

std::string Federacion::getCodigo() const
{
    return codigo;
}

std::string Federacion::getNombre() const
{
    return nombre;
}
