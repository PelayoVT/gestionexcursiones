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
#include "Federacion.hpp"
#include "Socio.hpp"

class SocioFederado : public Socio
{
public:
    SocioFederado(
        int numeroSocio,
        const std::string& nombre,
        const std::string& nif,
        const Federacion& federacion);

    double calcularCuotaMensual() const override;
    double calcularPrecioExcursion(double precioBase) const override;

    std::string getTipo() const override;
    std::string getNif() const;
    Federacion getFederacion() const;

private:
    std::string nif;
    Federacion federacion;
};
