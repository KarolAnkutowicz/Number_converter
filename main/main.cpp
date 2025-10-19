/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 17.10.2025
 * file: main.cpp
 */
#include "../../api/convert.hpp"
#include <iostream>

int main()
{
    std::cout << "Number converter..." << std::endl;
    std::cout
        << 100 << " " << 2 << " " << convert_decimal_to_other_positional(100, 2) << std::endl
        << 32 << " " << 2 << " " << convert_decimal_to_other_positional(32, 2) << std::endl
        << 57 << " " << 2 << " " << convert_decimal_to_other_positional(57, 2) << std::endl;
    std::cout
        << "1111" << " " << 2 << " " << convert_other_positional_to_decimal("1111", 2) << std::endl
        << "110011" << " " << 2 << " " << convert_other_positional_to_decimal("110011", 2) << std::endl
        << "100" << " " << 2 << " " << convert_other_positional_to_decimal("100", 2) << std::endl;
}

/* main.cpp */
/********** END_OF_FILE **********/
