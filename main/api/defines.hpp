/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 18.10.2025
 * file: defines.hpp
 */
#ifndef DEFINES_HPP
#define DEFINES_HPP

#include <string>

// Definicje rozmiaru tablicy cyfr system�w pozycyjnych
constexpr int system_positional_elements = 20;

// Definicja rozmiaru tablicy cyfr rzymskiech
constexpr int system_roman_elements = 7;

// Definicja tablicy cyfr system�w pozcycyjnych
static char system_positional[system_positional_elements] =
{ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
  'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };

// Definicja tablicy cyfr systemu rzymskiego
static char system_roman[system_roman_elements] = 
{ 'I', 'V', 'X', 'L', 'C', 'D', 'M' };

// Funkcje zwracajace wartosc liczbow� elementu domy�lnego
constexpr int default_value = -1;

// Enum typ�w cyfr
enum class type_system_e
{
	positional,
	roman
};

// Funkcja zwracaj�ca napis okre�laj�cy warto�� enuma typ�w cyfr
static std::string get_string_type_system(type_system_e type_system)
{
	switch (type_system)
	{
	case type_system_e::positional:
		return "pozycyjny";
	case type_system_e::roman:
		return "rzymski";
	default:
		return "";
	}
}

// Funkcja obliczaj�ca pot�g� o zadanej podstawie i wyk�adniku
static int power(int base, int exponent)
{
	int result = 1;
	for (int i = exponent; i > 0; --i)
		result *= base;
	return result;
}

// Funkcja zwracaj�ca warto�� liczbow� cyfry
static int get_number(type_system_e type_system, char symbol)
{
	int number = default_value;
	int max_range = default_value;
	switch (type_system)
	{
	case type_system_e::positional:
		max_range = system_positional_elements;
		break;
	case type_system_e::roman:
		max_range = system_roman_elements;
		break;
	}
	for (int index = 0; index < max_range; ++index)
	{
		switch (type_system)
		{
		case type_system_e::positional:
			if (symbol == system_positional[index])
				number = index;
			break;
		case type_system_e::roman:
			if (symbol == system_roman[index])
				number = (1 + 4 * (index % 2)) * power(10, index / 2);
			break;
		}
	}
	return number;
}

// Funkcja zwracaj�ca warto�� liczbow� cyfry system�w pozycyjnych
static int get_number_positional(char symbol)
{
	return get_number(type_system_e::positional, symbol);
}

// Funkcja zwracaj�ca warto�� liczbow� cyfry systemu rzymskiego
static int get_number_roman(char symbol)
{
	return get_number(type_system_e::roman, symbol);
}

// Funkcja zwracaj�ca cyfr� systemu pozycyjnego
static char get_symbol_positional(int index)
{
	if ((index < 0) || (index >= system_positional_elements))
		return ' ';
	else
		return system_positional[index];
}

// Funkcja zwracaj�ca cyfr� systemu rzymskiego
static char get_symbol_roman(int index)
{
	if ((index < 0) || (index >= system_roman_elements))
		return ' ';
	else
		return system_roman[index];
}

#endif

/* defines.hpp */
/********** END_OF_FILE **********/
