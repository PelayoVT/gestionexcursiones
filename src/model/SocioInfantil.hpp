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
#include "Socio.hpp"

class SocioInfantil : public Socio
{
public:
    SocioInfantil(int numeroSocio, const std::string& nombre, Socio& padre);

    double calcularCuotaMensual() const override;
    double calcularPrecioExcursion(double precioBase) const override;

    int getNumeroSocioPadre() const;
    std::string getTipo() const override;

private:
    Socio* padre;
};
