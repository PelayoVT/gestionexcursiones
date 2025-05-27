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
#include "Seguro.hpp"
#include "Socio.hpp"

class SocioEstandar : public Socio
{
public:
    SocioEstandar(
        int numeroSocio,
        const std::string& nombre,
        const std::string& nif,
        Seguro seguro);

    double calcularCuotaMensual() const override;
    double calcularPrecioExcursion(double precioExcursion) const override;

    std::string getNif() const;
    Seguro getSeguro() const;
    void setSeguro(const Seguro& nuevoSeguro);

    std::string getTipo() const override;

private:
    std::string nif;
    Seguro seguro;
};
