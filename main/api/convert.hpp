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

	// Metoda konwertuj¹ca z systemu pozycyjnego dziesiêtnego na system pozycyjny o dodatniej podstawie
	std::string convert_decimal_to_positive_positional(long long number_digit, int base_to);

	// Metoda konwertuj¹ca z systemu pozycyjnego o dodatniej podstawie na system dziesiêtny
	long long convert_positive_positional_to_decimal(std::string number_string, int base_from);

	// Metoda konwertuj¹ca z systemu pozycyjnego dziesiêtnego na rzymski
	std::string convert_decimal_to_roman(long long number_digit);

	// Metoda konwertuj¹ca z systemu rzymskiego na pozycyjny dziesiêtny
	long long convert_roman_to_decimal(std::string number_string);

	// Metoda konwertuj¹ca z systemu pozycyjnego dziesiêtnego na system pozycyjny o podstawie -2
	std::string convert_decimal_to_minus_two_positional(long long number_digit);

	// Metoda konwertuj¹ca z systemu pozycyjnego o podstawie -2 na system pozycyjny dziesiêtny
	long long convert_minus_two_positional_to_decimal(std::string number_string);

private:
	// Metoda pomocnicza sprawdzaj¹ca poprawnoœæ wprowadzonej liczby
	bool check_number(std::string base_number, int base);

	// Metoda pomocnicza dodaj¹ca znak na pocz¹tek ci¹gu znaków
	std::string add_char_to_begin_string(std::string base, char symbol);

	// Metoda pomocnicza zwracaj¹ca liczbê znaków liczby
	int get_length_number(long long number_digit);

	// Metoda pomocnicza okreœlaj¹ca czy liczba jest ujemna
	bool is_negative(long long number_digit);

	// Metoda pomocnicza okreœlaj¹ca czy liczba jest ujemna
	bool is_negative(std::string number_string);

	// Metoda tworz¹ca liczbê dodatni¹
	long long make_positive(long long number_digit);

	// Metoda tworz¹ca liczbê dodatni¹
	std::string make_positive(std::string number_string);
};


#endif

/* convert.hpp */
/********** END_OF_FILE **********/
