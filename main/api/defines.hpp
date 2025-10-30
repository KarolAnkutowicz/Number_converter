/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 18.10.2025
 * file: defines.hpp
 */
#ifndef DEFINES_HPP
#define DEFINES_HPP

#include <string>

// Definicje rozmiaru tablicy cyfr systemów pozycyjnych
constexpr int system_positional_elements = 20;

// Definicja rozmiaru tablicy cyfr rzymskiech
constexpr int system_roman_elements = 7;

// Definicja tablicy cyfr systemów pozcycyjnych
static char system_positional[system_positional_elements] =
{ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
  'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };

// Definicja tablicy cyfr systemu rzymskiego
static char system_roman[system_roman_elements] = 
{ 'I', 'V', 'X', 'L', 'C', 'D', 'M' };

// Funkcje zwracajace wartosc liczbow¹ elementu domyœlnego
constexpr int default_value = -1;

// Enum typów cyfr
enum class type_system_e
{
	positional,
	roman
};

// Funkcja zwracaj¹ca napis okreœlaj¹cy wartoœæ enuma typów cyfr
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

// Funkcja obliczaj¹ca potêgê o zadanej podstawie i wyk³adniku
static int power(int base, int exponent)
{
	int result = 1;
	for (int i = exponent; i > 0; --i)
		result *= base;
	return result;
}

// Funkcja zwracaj¹ca wartoœæ liczbow¹ cyfry
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

// Funkcja zwracaj¹ca wartoœæ liczbow¹ cyfry systemów pozycyjnych
static int get_number_positional(char symbol)
{
	return get_number(type_system_e::positional, symbol);
}

// Funkcja zwracaj¹ca wartoœæ liczbow¹ cyfry systemu rzymskiego
static int get_number_roman(char symbol)
{
	return get_number(type_system_e::roman, symbol);
}

// Funkcja zwracaj¹ca cyfrê systemu pozycyjnego
static char get_symbol_positional(int index)
{
	if ((index < 0) || (index >= system_positional_elements))
		return ' ';
	else
		return system_positional[index];
}

// Funkcja zwracaj¹ca cyfrê systemu rzymskiego
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
