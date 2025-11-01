/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 18.10.2025
 * file: convert.cpp
 */

#include "../api/convert.hpp"

convert_t::convert_t()
{}

std::string convert_t::convert_decimal_to_positive_positional(long long number_digit, int base_to)
{
	std::string result{};
	if ((base_to >= 2) && (base_to <= 20) && check_number(std::to_string(number_digit), 10))
	{
		if (10 == base_to)
			result = std::to_string(number_digit);
		else
		{
			bool negative_arg = is_negative(number_digit);
			if (negative_arg)
				number_digit = make_positive(number_digit);
			int rest;
			do
			{
				rest = number_digit % base_to;
				result = get_symbol_positional(rest) + result;
				number_digit = (number_digit - rest) / base_to;
			} while (number_digit > 0);
			if (negative_arg)
				result = '-' + result;
		}
	}
	return result;
}

long long convert_t::convert_positive_positional_to_decimal(std::string number_string, int base_from)
{
	long long result{};
	if ((base_from >= 2) && (base_from <= 20) && (check_number(number_string, base_from)))
	{
		if (10 == base_from)
			result = stoll(number_string);
		else
		{
			bool negative_arg = is_negative(number_string);
			if (negative_arg)
				number_string = make_positive(number_string);
			long long coefficient = 1;
			do
			{
				result += get_number_positional(number_string.back()) * coefficient;
				coefficient *= base_from;
				number_string.pop_back();
			} while (number_string.size() > 0);
			if (negative_arg)
				result *= (-1);
		}
	}
	return result;
}

std::string convert_t::convert_decimal_to_roman(long long number_digit)
{
	std::string result{};
	long long rest{};
	int position = 0;
	if ((number_digit > 0) && (number_digit <= 3999))
	{
		do
		{
			rest = number_digit % 10;
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
			number_digit = (number_digit - rest) / 10;
			position += 2;
		} while (number_digit > 0);
	}
	return result;

}

long long convert_t::convert_roman_to_decimal(std::string number_string)
{
	long long result = 0;
	char current_symbol = {};
	if (0 == sizeof(number_string))
		return result;
	else
	{
		char previous_symbol = number_string.back();
		do
		{
			current_symbol = number_string.back();
			if (get_number_roman(current_symbol) >= get_number_roman(previous_symbol))
			{
				result += get_number_roman(current_symbol);
			}
			else
			{
				result -= get_number_roman(current_symbol);
			}
			previous_symbol = current_symbol;
			number_string.pop_back();
		} while (number_string.length() > 0);
	}
	return result;
}

std::string convert_t::convert_decimal_to_minus_two_positional(long long number_digit)
{
	std::string result{};
	if ((0 != number_digit) && (check_number(std::to_string(number_digit), 10)))
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

long long convert_t::convert_minus_two_positional_to_decimal(std::string number_string)
{
	long long result{};
	long long coefficient = 1;
	if (check_number(number_string, -2))
	{
		do
		{
			result += get_number_positional(number_string.back()) * coefficient;
			coefficient *= (-2);
			number_string.pop_back();
		} while (number_string.size() > 0);
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

bool convert_t::is_negative(long long number_digit)
{
	bool negative = false;
	if (number_digit < 0)
		negative = true;
	return negative;
}

bool convert_t::is_negative(std::string number_string)
{
	bool negative = false;
	if ('-' == number_string.front())
		negative = true;
	return negative;
}

long long convert_t::make_positive(long long number_digit)
{
	if (number_digit < 0)
		number_digit *= (-1);
	return number_digit;
}

std::string convert_t::make_positive(std::string number_string)
{
	if ('-' == number_string.front())
	{
		std::string number_temp{};
		do
		{
			number_temp.push_back(number_string.back());
			number_string.pop_back();
		} while (1 != number_string.size());
		number_string.pop_back();
		do
		{
			number_string.push_back(number_temp.back());
			number_temp.pop_back();
		} while (number_temp.size() > 0);
	}
	return number_string;
}

/* convert.cpp */
/********** END_OF_FILE **********/
