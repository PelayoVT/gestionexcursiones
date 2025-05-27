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

class Inscripciones
{
public:
    Inscripciones(int identificador, int numeroSocio, const std::string& codigoExcursion);
    int getIdentificador();
    int getNumeroSocio();
    std::string getCodigoExcursion();

private:
    int identificador;
    int numeroSocio;
    std::string codigoExcursion;
};
