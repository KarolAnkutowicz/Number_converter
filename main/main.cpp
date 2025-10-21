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
    std::cout
        << "1" << " " << convert_decimal_to_roman(1) << std::endl
        << "5" << " " << convert_decimal_to_roman(5) << std::endl
        << "10" << " " << convert_decimal_to_roman(10) << std::endl
        << "50" << " " << convert_decimal_to_roman(50) << std::endl
        << "100" << " " << convert_decimal_to_roman(100) << std::endl
        << "500" << " " << convert_decimal_to_roman(500) << std::endl
        << "1000" << " " << convert_decimal_to_roman(1000) << std::endl
        << "3001" << " " << convert_decimal_to_roman(3001) << std::endl
        << "199" << " " << convert_decimal_to_roman(199) << std::endl
        << "2468" << " " << convert_decimal_to_roman(2468) << std::endl
        << "45" << " " << convert_decimal_to_roman(45) << std::endl
        << "777" << " " << convert_decimal_to_roman(777) << std::endl;
    std::cout
        << "II" << " " << convert_roman_to_decimal("II") << std::endl
        << "III" << " " << convert_roman_to_decimal("III") << std::endl
        << "MMMI" << " " << convert_roman_to_decimal("MMMI") << std::endl
        << "MMDCCLXXIX" << " " << convert_roman_to_decimal("MMDCCLXXIX") << std::endl;
}

/* main.cpp */
/********** END_OF_FILE **********/
