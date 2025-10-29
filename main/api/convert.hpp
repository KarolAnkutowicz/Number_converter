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
	// Konstruktor
	convert_t();

	// Metoda konwertuj�ca pomi�dzy systemami pozycyjnymi
	std::string convert_positionals(std::string base_number, int base_from, int base_to);

	// Metoda konwertuj�ca liczb� z systemu pozycyjnego dziesi�tnego na rzymski
	std::string convert_decimal_to_roman(unsigned long long number_digit);

	// Metoda konweruj�ca liczb� z systemu rzymskiego na pozycyjny dziesi�tny
	unsigned long long convert_roman_to_decimal(std::string number_char);

	// Metoda konwertuj�ca liczb� z systemu pozycyjnego na pozycyjny o podstawie -2
	std::string convert_decimal_to_minus_two_positional(long long number_digit);

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
