/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 18.10.2025
 * file: defines.hpp
 */
#ifndef DEFINES_HPP
#define DEFINES_HPP

// Definicje rozmiarów tablic elementów systemów liczbowych

constexpr int system_positional_elements = 20;

constexpr int system_roman_elements = 7;

constexpr int system_roman_coefficient_elements = 2;

// Definicje elementów systemów liczbowych

char system_positional[system_positional_elements] =
{ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
  'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };

char system_roman[system_roman_elements] = 
{ 'I', 'V', 'X', 'L', 'C', 'D', 'M' };

char system_roman_coefficient[system_roman_coefficient_elements] = 
{ '|', '-' };

// Funkcje zwracajace wartosc liczbow¹ elementu

constexpr int default_value = -1;

// Enum typów symboli

enum class type_system_e
{
	positional,
	roman,
	roman_coefficient
};

// Obliczanie potêgi o zadanej podstawie i wyk³adniku

int power(int base, int exponent)
{
	int result = 1;
	for (int i = exponent; i > 0; --i)
		result *= base;
	return result;
}

// Zwrócenie wartoœci liczbowej symbolu cyfry

int get_number(type_system_e type_system, char symbol)
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
	case type_system_e::roman_coefficient:
		max_range = system_roman_coefficient_elements;
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
		case type_system_e::roman_coefficient:
			if (symbol == system_roman_coefficient[index])
				number = 100 * power(10, index);
			break;
		}
	}
	return number;
}

// Zwrócenie wartoœci liczbowej symbolu cyfry systemów pozycyjnych

int get_number_positional(char symbol)
{
	return get_number(type_system_e::positional, symbol);
}

// Zwrócenie wartoœci liczbowej symbolu cyfry systemu rzymskiego

int get_number_roman(char symbol)
{
	return get_number(type_system_e::roman, symbol);
}

// Zwrócenie wartoœci przelicznika symbolu systemu rzymskiego

int get_number_roman_coefficient(char symbol)
{
	return get_number(type_system_e::roman_coefficient, symbol);
}

// Zwrócenie symbolu cyfry systemu pozycyjnego

char get_symbol_positional(int index)
{
	if ((index < 0) || (index >= system_positional_elements))
		return ' ';
	else
		return system_positional[index];
}

// Zwrócenie symbolu cyfry systemu rzymskiego

char get_symbol_roman(int index)
{
	if ((index < 0) || (index >= system_roman_elements))
		return ' ';
	else
		return system_roman[index];
}

// Zwrócenie symbolu przelicznika systemu rzymskiego

char get_symbol_roman_coefficient(int index)
{
	if ((index < 0) || (index >= system_roman_coefficient_elements))
		return ' ';
	else
		return system_roman_coefficient[index];
}

#endif

/* defines.hpp */
/********** END_OF_FILE **********/
