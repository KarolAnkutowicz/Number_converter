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

	// Metoda wypisuj�ca powitanie
	void print_entrance();

	// Metoda wypisuj�ca menu g��wne
	void print_main_menu();

	// Metoda wypisuj�ca jakie dane potrzebujemy do konwersji pomi�dzy systemami pozycyjnymi
	void print_positional_positional_convert(char option);

	// Metoda wypisuj�ca jakie dane potrzebujemy do konwersji pomi�dzy systemem rzymskim a pozycyjnym
	void print_roman_positional_convert(char option);

	// Metoda wypisuj�ca jakie dane potrzebujemy do utworzenia pliku
	void print_files_handling(char option);

	// Metoda wypisuj�ca zapytanie o pozostanie w bie��cym module
	void print_repeat_module();

	// Metoda wypisuj�ca rozwi�zanie
	void print_complete_result(std::string number_arg, int base_from, int base_to, std::string number_res);

	// Metoda wypisuj�ca rozwi�zanie
	void print_complete_result(std::string number_arg, int base, std::string number_res, type_system_e first_number);

	// Metoda wypisuj�ca tekst ko�cowy
	void print_goodbye();

	// Metoda wypisuj�ca oczekiwanie na podanie opcji
	void await_option();
};

#endif

 /* printer.hpp */
 /********** END_OF_FILE **********/
