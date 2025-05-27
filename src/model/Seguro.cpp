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

#include "Seguro.hpp"

Seguro::Seguro(TipoSeguro tipo, double precio)
    : tipo(tipo)
    , precio(precio)
{
}

TipoSeguro Seguro::getTipo() const
{
    return tipo;
}

double Seguro::getPrecio() const
{
    return precio;
}

std::string Seguro::getDescripcion() const
{
    return tipoSeguroToString(tipo);
}

std::string tipoSeguroToString(TipoSeguro tipo)
{
    switch (tipo)
    {
    case TipoSeguro::BASICO:
        return "Basico";
    case TipoSeguro::COMPLETO:
        return "Completo";
    default:
        return "N/A";
    }
}
