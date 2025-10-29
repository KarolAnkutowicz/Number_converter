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
	// Metoda g³ównej obs³ugi programu
	void main_handling();

	// Metoda obs³ugi konwersji miêdzy systemami pozycyjnymi
	void positional_positional_handling(char& option);

	// Metoda obs³ugi konwersji miêdzy systemem rzymskim a pozycyjnym o dowolnej podstawie
	void roman_positional_handling(char& option);

	// Metoda obs³ugi plików testowych
	void files_handling(char& option);

	// Obiekt przechowuj¹cy bie¿¹c¹ opcjê g³ównego menu
	char option;

	// Obiekt obs³uguj¹cy konwersje
	convert_t convert;

	// Obiekt obs³uguj¹cy wypisywanie 
	printer_t printer;
};

#endif

 /* handling.hpp */
 /********** END_OF_FILE **********/
