#include <iostream>
#include "utils.hpp"
uint16_t _dac_out = 0;

int main()
{
    float dac_out = 0.90f;
    _dac_out = utils::to_uint16(dac_out);
    std::cout << _dac_out << std::endl;

    return 0;
}