/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 25.10.2025
 * file: printer.cpp
 */

#include "../api/printer.hpp"

printer_t::printer_t()
{}

void printer_t::print_entrance()
{
	system("CLS");
	std::cout << std::endl << " Witamy w konwerterze! :)" << std::endl << std::endl << " ";
	system("PAUSE");
}

void printer_t::print_main_menu()
{
	system("CLS");
	std::cout << std::endl << " Menu glowne: " << std::endl << std::endl
		<< " (1) zamiana z systemu pozycyjnego o podstawie 2-20 na 2-20" << std::endl
		<< " (2) zamiana z systemu pozycyjnego o podstawie 2-20 na -2" << std::endl
		<< " (3) zamiana z systemu pozycyjnego o podstawie -2 na 2-20" << std::endl << std::endl
		<< " (4) zamiana z systemu pozycyjnego o podstawie 10 na system rzymski" << std::endl
		<< " (5) zamiana z systemu rzymskiego na system pozycyjny o podstawie 10" << std::endl << std::endl
		<< " (6) wygeneruj plik z testami: systemy pozycyjne 2-20" << std::endl
		<< " (7) wygeneruj plik z testami: pozycyjny -2 <-> pozycyne 2-20" << std::endl
		<< " (8) wygeneruj plik z testami: pozycyjne 2-20 <-> rzymskie" << std::endl << std::endl
		<< " (w) wyjscie" << std::endl << std::endl;
}

void printer_t::await_option()
{
	std::cout << " Podaj opcje: ";
}

void printer_t::print_goodbye()
{
	system("CLS");
	std::cout << std::endl << " Do zobaczenia! :)" << std::endl;
}

 /* printer.cpp */
 /********** END_OF_FILE **********/
