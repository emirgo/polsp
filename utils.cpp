#include "utils.hpp"

constexpr uint16_t m_max_value = 32766; 

uint16_t utils::to_uint16(float value)
{
    value *= 32766;
    value += 32766;

    return (uint16_t)value;
}