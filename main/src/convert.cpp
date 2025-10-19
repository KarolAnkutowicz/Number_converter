/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 18.10.2025
 * file: convert.cpp
 */

#include "../api/convert.hpp"
#include "../api/defines.hpp"

std::string convert_decimal_to_other_positional(unsigned long long number_digit, int base)
{
	std::string result = "";
	if ((base < 2) || (base > 20))
		return result;
	else if (10 == base)
		result = std::to_string(number_digit);
	else
	{
		int rest = 0;
		unsigned long long number = number_digit;
		do
		{
			rest = number % base;
			result = get_symbol_positional(rest) + result;
			number = (number - rest) / base;
		} while (number > 0);
	}
	return result;
}

unsigned long long convert_other_positional_to_decimal(std::string number_char, int base)
{
	unsigned long long result = 0;
	if (((base < 2) || (base > 20)) || (0 == sizeof(number_char)))
		return result;
	else
	{
		unsigned long long power = 1;
		std::string number = number_char;
		do
		{
			result += get_number_positional(number.back()) * power;
			number.pop_back();
			power *= base;
		} while (number.size() > 0);
	}
	return result;
}

std::string convert_decimal_to_roman(unsigned long long number_digit)
{
	std::string result = "";
	if (number_digit > 3999)
		return result;
	else
	{
		// TODO
	}
	return result;
}

unsigned long long convert_roman_to_decimal(std::string number_char)
{
	unsigned long long result = 0;
	char last_symbol = {};
	if (0 == sizeof(number_char))
		return result;
	else
	{
		// TODO
	}
	return result;
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
