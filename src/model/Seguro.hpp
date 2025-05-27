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

enum class TipoSeguro
{
    BASICO,
    COMPLETO
};

std::string tipoSeguroToString(TipoSeguro tipo);

class Seguro
{
public:
    Seguro(TipoSeguro tipo, double precio);

    TipoSeguro getTipo() const;
    double getPrecio() const;
    std::string getDescripcion() const;

private:
    TipoSeguro tipo;
    double precio;
};
