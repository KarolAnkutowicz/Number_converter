/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 18.10.2025
 * file: convert.cpp
 */

#include "../api/convert.hpp"
#include "../api/defines.hpp"
#include <vector>

convert_t::convert_t()
{}

std::string convert_t::convert_positionals(std::string base_number, int base_from, int base_to)
{
	std::string result = "";
	if (("" != base_number) && check_number(base_number, base_from)
		&& (((base_from >= 2) && (base_from <= 20)) || (-2 == base_from)) && ((base_to >= 2) && (base_to <= 20)))
	{
		if (base_from == base_to)
			result = base_number;
		else
		{
			long long semi_result = 0;
			if (10 == base_from)
				semi_result = std::stoll(base_number);
			else
			{
				long long coefficient = 1;
				std::string semi_number = base_number;
				do
				{
					semi_result += get_number_positional(semi_number.back()) * coefficient;
					semi_number.pop_back();
					coefficient *= base_from;
				} while (0 != semi_number.size());
			}
			if (10 == base_to)
				result = std::to_string(semi_result);
			else
			{
				int rest = 0;
				long long number = semi_result;
				do
				{
					rest = number % base_to;
					result = get_symbol_positional(rest) + result;
					number = (number - rest) / base_to;
				} while (number != 0);
			}
		}
	}
	return result;
}

std::string convert_t::convert_decimal_to_roman(unsigned long long number_digit)
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
					result = add_char_to_begin_string(result, system_roman[position + rest / 4]);
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

unsigned long long convert_t::convert_roman_to_decimal(std::string number_char)
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
			if (get_number_roman(current_symbol) >= get_number_roman(previous_symbol))
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

std::string convert_t::convert_decimal_to_minus_two_positional(long long number_digit)
{
	std::string result = "";
	if (0 != number_digit)
	{
		long long number = number_digit;
		long long number_temp{};
		for (int i = 0; i < get_length_number(number); ++i)
			result += '0';
		do
		{
			for (int i = 0; i < get_length_number(number); ++i)
				result.pop_back();
			result += '1';
			for (int i = 0; i < (get_length_number(number) - 1); ++i)
				result += '0';
			number_temp = power(-2, get_length_number(number) - 1);
			number -= number_temp;
		} while (0 != number);
	}
	return result;
}

bool convert_t::check_number(std::string base_number, int base)
{
	bool result = true;
	if (" " == base_number)
		result = false;
	else
	{
		std::string number = base_number;
		do
		{
			if (get_number_positional(number.back()) > std::abs(base - 1))
			{
				result = false;
				break;
			}
			number.pop_back();
		} while (0 != number.size());
	}
	return result;
}

std::string convert_t::add_char_to_begin_string(std::string base_string, char symbol)
{
	std::string result = "";
	result.push_back(symbol);
	result += base_string;
	return result;
}

int convert_t::get_length_number(long long number_digit)
{
	int index = 0;
	if (0 != number_digit)
	{
		long long number = std::abs(number_digit);
		if (number_digit > 0)
			index = 1;
		else
			index = 2;
		long long max_limit = index, temp = index;
		while (max_limit < number)
		{
			temp *= 4;
			max_limit += temp;
			index += 2;
		}
	}
	return index;
}

/* convert.cpp */
/********** END_OF_FILE **********/
