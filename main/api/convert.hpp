/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 18.10.2025
 * file: convert.hpp
 */
#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>

// Konwersja liczby w systemie dziesiêtnym na inny system pozycyjny (podstawa 2-20)

std::string convert_decimal_to_other_positional(unsigned long long number_digit, int base);

// Konwersja liczby z innego systemu pozycyjnego (podstawa 2-20) na system dziêsiêtny

unsigned long long convert_other_positional_to_decimal(std::string number_char, int base);

// Metoda pomocnicza - dodawanie symbolu rzymskiego na pocz¹tek napisu

std::string add_char_to_begin_string(std::string base, char symbol);

// Konwersja liczby w systemie dziesiêtnym na system rzymski

std::string convert_decimal_to_roman(unsigned long long number_digit);

// Konwersja liczby w systemie rzymskim na system dziesiêtny

unsigned long long convert_roman_to_decimal(std::string number_char);

// Konwersja liczby w systemie dziesiêtnym na system pozycyjny o podstawie -2

std::string convert_decimal_to_minus_two_positional(unsigned long long number_digit);

// Konwersja liczby w systemie pozycyjnym o podstawie -2 na system dziesiêtny

unsigned long long convert_minus_two_positional_to_decimal(std::string number_char);

#endif

/* convert.hpp */
/********** END_OF_FILE **********/
