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

#include <gtest/gtest.h>
#include <model/Excursion.hpp>

TEST(Excursion, MostrarDatos)
{
    Excursion e {"EX001", "Ruta al monte", "2025-06-01", 2, 50.0};
    auto codigo = e.getCodigo();
    ASSERT_EQ("EX001", codigo);
}
