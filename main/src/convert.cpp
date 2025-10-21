/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 18.10.2025
 * file: convert.cpp
 */

#include "../api/convert.hpp"
#include "../api/defines.hpp"
#include <iostream>

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

std::string add_char_to_begin_string(std::string base_string, char symbol)
{
	std::string result = "";
	result.push_back(symbol);
	result += base_string;
	return result;
}


std::string convert_decimal_to_roman(unsigned long long number_digit)
{
	std::string result = "";
	unsigned long long number = number_digit, rest = {};
	int position = 0;
	if (number_digit > 3999)
		return result;
	else
	{
		do
		{
			rest = number % 10;
			if (0 != rest)
			{
				if ((4 == rest) || (9 == rest))
				{
					result = add_char_to_begin_string(result, system_roman[position + rest/4]);
					result = add_char_to_begin_string(result, system_roman[position]);
				}
				else
				{
					for (int i = 0; i < (rest < 4 ? rest : (rest - 5)); ++i)
						result = add_char_to_begin_string(result, system_roman[position]);
					if (rest > 4)
						result = add_char_to_begin_string(result, system_roman[position + 1]);
				}
			}
			number = (number - rest) / 10;
			position += 2;
		} while (number > 0);
	}
	return result;
}

unsigned long long convert_roman_to_decimal(std::string number_char)
{
	std::string number = number_char;
	unsigned long long result = 0;
	char current_symbol = {};
	if (0 == sizeof(number))
		return result;
	else
	{
		char previous_symbol = number.back();
		do
		{
			current_symbol = number.back();
			if (get_number_roman(current_symbol) >= get_number_roman(previous_symbol) )
			{
				result += get_number_roman(current_symbol);
			}
			else
			{
				result -= get_number_roman(current_symbol);
			}
			previous_symbol = current_symbol;
			number.pop_back();
		} while (number.length() > 0);
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
