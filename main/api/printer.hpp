/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 25.10.2025
 * file: printer.hpp
 */

#ifndef PRINTER_HPP
#define PRINTER_HPP

#include "defines.hpp"
#include <iostream>

class printer_t
{
public:
	// Konstruktor
	printer_t();

	// Metoda wypisuj¹ca powitanie
	void print_entrance();

	// Metoda wypisuj¹ca menu g³ówne
	void print_main_menu();

	// Metoda wypisuj¹ca jakie dane potrzebujemy do konwersji pomiêdzy systemami pozycyjnymi
	void print_positional_positional_convert(char option);

	// Metoda wypisuj¹ca jakie dane potrzebujemy do konwersji pomiêdzy systemem rzymskim a pozycyjnym
	void print_roman_positional_convert(char option);

	// Metoda wypisuj¹ca jakie dane potrzebujemy do utworzenia pliku
	void print_files_handling(char option);

	// Metoda wypisuj¹ca zapytanie o pozostanie w bie¿¹cym module
	void print_repeat_module();

	// Metoda wypisuj¹ca rozwi¹zanie
	void print_complete_result(std::string number_arg, int base_from, int base_to, std::string number_res);

	// Metoda wypisuj¹ca rozwi¹zanie
	void print_complete_result(std::string number_arg, int base, std::string number_res, type_system_e first_number);

	// Metoda wypisuj¹ca tekst koñcowy
	void print_goodbye();

	// Metoda wypisuj¹ca oczekiwanie na podanie opcji
	void await_option();
};

#endif

 /* printer.hpp */
 /********** END_OF_FILE **********/
