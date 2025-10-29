/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 25.10.2025
 * file: handling.hpp
 */

#ifndef HANDLING_HPP
#define HANDLING_HPP

#include "../api/convert.hpp"
#include "../api/printer.hpp"

class handling_t
{
public:
	// Konstruktor
	handling_t();

private:
	// Metoda g��wnej obs�ugi programu
	void main_handling();

	// Metoda obs�ugi konwersji mi�dzy systemami pozycyjnymi
	void positional_positional_handling(char& option);

	// Metoda obs�ugi konwersji mi�dzy systemem rzymskim a pozycyjnym o dowolnej podstawie
	void roman_positional_handling(char& option);

	// Metoda obs�ugi plik�w testowych
	void files_handling(char& option);

	// Obiekt przechowuj�cy bie��c� opcj� g��wnego menu
	char option;

	// Obiekt obs�uguj�cy konwersje
	convert_t convert;

	// Obiekt obs�uguj�cy wypisywanie 
	printer_t printer;
};

#endif

 /* handling.hpp */
 /********** END_OF_FILE **********/
