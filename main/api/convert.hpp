/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 18.10.2025
 * file: convert.hpp
 */
#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>

class convert_t
{
public:
	convert_t();
	std::string convert_positionals(std::string base_number, int base_from, int base_to);
	std::string convert_decimal_to_roman(unsigned long long number_digit);
	unsigned long long convert_roman_to_decimal(std::string number_char);
	std::string convert_decimal_to_minus_two_positional(long long number_digit);
private:
	bool check_number(std::string base_number, int base);
	std::string add_char_to_begin_string(std::string base, char symbol);
	int get_length_number(long long number_digit);
};


#endif

/* convert.hpp */
/********** END_OF_FILE **********/
