/**
 * @file ip_utils.cpp
 *
 * CopyRight F. J. Madrid-Cuevas <fjmadrid@uco.es>
 *
 * Sólo se permite el uso de este código en la docencia de las asignaturas sobre
 * Estructuras de Datos de la Universidad de Córdoba.
 *
 * Está prohibido su uso para cualquier otro objetivo.
 */

#include <algorithm>
#include "ip_utils.hpp"

std::uint64_t
IpToInt::operator() (const IP& ip) const
{
    std::uint64_t ret_val = 0l;
    //TODO
    //Remember: casting to 64 bits unsigned integer to do not loss bits.
    //Hint: mult by 2^n means shift to left n bits.

    //
    return ret_val;
}

std::ostream&
operator<< (std::ostream& out, const IP& ip)
{
    //TODO
    //Remember: we want to output the ascii code, not the char.

    //
    return out;
}

std::istream&
operator>>(std::istream& in, IP& ip) noexcept(false)
{
    //TODO
    //Hint: you can use a std::istringstream to convert from text to uint8_t.
    //Hint: you can use the std::replace algorithm to replace '.' by ' '.
    //Remember: if a wrong format is detected, throw an runtime_error exception.

    //
    return in;
}

IpToInt::Ref
IpToInt::create()
{
    return std::make_shared<IpToInt>();
}
