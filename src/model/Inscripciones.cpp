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

#include "Inscripciones.hpp"

Inscripciones::Inscripciones(int identificador, int numeroSocio, const std::string& codigoExcursion)
    : identificador(identificador)
    , numeroSocio(numeroSocio)
    , codigoExcursion(codigoExcursion)
{
}

int Inscripciones::getIdentificador()
{
    return identificador;
}

int Inscripciones::getNumeroSocio()
{
    return numeroSocio;
}

std::string Inscripciones::getCodigoExcursion()
{
    return codigoExcursion;
}
