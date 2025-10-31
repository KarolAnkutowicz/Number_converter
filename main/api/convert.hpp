/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 18.10.2025
 * file: convert.hpp
 */
#ifndef CONVERT_HPP
#define CONVERT_HPP

#include "../api/defines.hpp"
#include <vector>

class convert_t
{
public:
	// Konstruktor
	convert_t();

	std::string convert_decimal_to_positive_positional(long long number_digit, int base_to);
	long long convert_positive_positional_to_decimal(std::string number_string, int base_from);
	std::string convert_decimal_to_roman(long long number_digit);
	long long convert_roman_to_decimal(std::string number_string);
	std::string convert_decimal_to_minus_two_positional(long long number_digit);
	long long convert_minus_two_positional(std::string number_string);




	// Metoda konwertuj�ca pomi�dzy systemami pozycyjnymi o podstawach 2-20
	//std::string convert_positive_positionals(std::string base_number, int base_from, int base_to);

	// Metoda konwertuj�ca liczb� z systemu pozycyjnego dziesi�tnego na rzymski
	//std::string convert_decimal_to_roman(unsigned long long number_digit);

	// Metoda konweruj�ca liczb� z systemu rzymskiego na pozycyjny dziesi�tny
	//unsigned long long convert_roman_to_decimal(std::string number_char);

	// Metoda konwertuj�ca liczb� z systemu pozycyjnego o podstawie 2-20 na pozycyjny o podstawie -2
	//std::string convert_positive_positional_to_minus_two_positional(std::string number_digit, int base_from);

	// Metoda konwertuj�ca liczb� z systemu pozycyjnego o podstawie -2 na pozycyjny o podstawie 2-20
	//std::string convert_minus_two_positional_to_positive_positional(std::string number_digit, int base_to);

private:
	// Metoda pomocnicza sprawdzaj�ca poprawno�� wprowadzonej liczby
	bool check_number(std::string base_number, int base);

	// Metoda pomocnicza dodaj�ca znak na pocz�tek ci�gu znak�w
	std::string add_char_to_begin_string(std::string base, char symbol);

	// Metoda pomocnicza zwracaj�ca liczb� znak�w liczby
	int get_length_number(long long number_digit);
};


#endif

/* convert.hpp */
/********** END_OF_FILE **********/
