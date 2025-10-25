/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 18.10.2025
 * file: convert.hpp
 */
#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>

// Funkcja pomocnicza - sprawdzenie poprawnoœci liczby w danym systemie

bool check_number(std::string base_number, int base);

// Konwersja z dowolnego systemu pozycyjnego na inny dowolny

std::string convert_positionals(std::string base_number, int base_from, int base_to);

// Funkcja pomocnicza - dodawanie symbolu rzymskiego na pocz¹tek napisu

std::string add_char_to_begin_string(std::string base, char symbol);

// Konwersja liczby w systemie dziesiêtnym na system rzymski

std::string convert_decimal_to_roman(unsigned long long number_digit);

// Konwersja liczby w systemie rzymskim na system dziesiêtny

unsigned long long convert_roman_to_decimal(std::string number_char);

// Funkcja pomocnicza - zwracanie liczby cyfr danej liczby

int get_length_number(long long number_digit);

// Konwersja liczby w systemie dziesiêtnym na system pozycyjny o podstawie -2

std::string convert_decimal_to_minus_two_positional(long long number_digit);

#endif

/* convert.hpp */
/********** END_OF_FILE **********/
