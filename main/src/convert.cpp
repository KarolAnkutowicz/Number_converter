/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 18.10.2025
 * file: convert.cpp
 */

#include "../api/convert.hpp"

std::string convert_decimal_to_other_positional(unsigned long long number_digit, int base)
{
	std::string result = "";
	if ((base < 2) || (base > 20))
		return result;
	else if (10 == base)
		result = std::to_string(number_digit);
	else
	{
		unsigned long long rest = 0, number = number_digit;
		do
		{
			rest = number % base;
			result = get_symbol_positional(rest) + result;
			number = (number - rest) / 10;
		} while (number > 0);
	}
	return result;
	return "";
}

unsigned long long convert_other_positional_to_decimal(std::string number_char, int base)
{
	// TODO
	return 0;
}

std::string convert_decimal_to_romal(unsigned long long number_digit)
{
	// TODO
	return "";
}

unsigned long long convert_roman_to_decimal(std::string number_char)
{
	// TODO
	return 0;
}

std::string convert_decimal_to_minus_two_positional(unsigned long long number_digit)
{
	// TODO
	return "";
}

unsigned long long convert_minus_two_positional_to_decimal(std::string number_char)
{
	// TODO
	return 0;
}

 /* convert.cpp */
 /********** END_OF_FILE **********/
