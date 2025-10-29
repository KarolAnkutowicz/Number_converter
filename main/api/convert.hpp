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

	// Metoda konwertuj¹ca pomiêdzy systemami pozycyjnymi
	std::string convert_positionals(std::string base_number, int base_from, int base_to);

	// Metoda konwertuj¹ca liczbê z systemu pozycyjnego dziesiêtnego na rzymski
	std::string convert_decimal_to_roman(unsigned long long number_digit);

	// Metoda konweruj¹ca liczbê z systemu rzymskiego na pozycyjny dziesiêtny
	unsigned long long convert_roman_to_decimal(std::string number_char);

	// Metoda konwertuj¹ca liczbê z systemu pozycyjnego na pozycyjny o podstawie -2
	std::string convert_decimal_to_minus_two_positional(long long number_digit);

private:
	// Metoda pomocnicza sprawdzaj¹ca poprawnoœæ wprowadzonej liczby
	bool check_number(std::string base_number, int base);

	// Metoda pomocnicza dodaj¹ca znak na pocz¹tek ci¹gu znaków
	std::string add_char_to_begin_string(std::string base, char symbol);

	// Metoda pomocnicza zwracaj¹ca liczbê znaków liczby
	int get_length_number(long long number_digit);
};


#endif

/* convert.hpp */
/********** END_OF_FILE **********/
