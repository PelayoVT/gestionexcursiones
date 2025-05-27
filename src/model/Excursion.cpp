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

#include "Excursion.hpp"
#include <iostream>

Excursion::Excursion(
    const std::string& codigo,
    const std::string& descripcion,
    const std::string& fecha,
    int numeroDias,
    double precio)
    : codigo(codigo)
    , descripcion(descripcion)
    , fecha(fecha)
    , numeroDias(numeroDias)
    , precio(precio)
{
}

std::string Excursion::getCodigo() const
{
    return codigo;
}

std::string Excursion::getDescripcion() const
{
    return descripcion;
}

std::string Excursion::getFecha() const
{
    return fecha;
}

int Excursion::getNumeroDias() const
{
    return numeroDias;
}

double Excursion::getPrecio() const
{
    return precio;
}

void Excursion::mostrar() const
{
    std::cout << "Excursion " << codigo << ": " << descripcion << " | Fecha: " << fecha
              << " | Duración: " << numeroDias << " días"
              << " | Precio: " << precio << "€" << std::endl;
}
