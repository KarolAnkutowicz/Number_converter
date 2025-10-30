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
		<< " (3) zamiana z systemu pozycyjnego o podstawie -2 na 2-20" << std::endl
		<< std::endl
		<< " (4) zamiana z systemu pozycyjnego o podstawie 2-20 na system rzymski" << std::endl
		<< " (5) zamiana z systemu rzymskiego na system pozycyjny o podstawie 2-20" << std::endl
		<< std::endl
		<< " (6) wygeneruj plik z testami: pozycyjne 2-20 <-> pozycyjne 2-20" << std::endl
		<< " (7) wygeneruj plik z testami: pozycyjne 2-20 <-> pozycyjny -2" << std::endl
		<< " (8) wygeneruj plik z testami: pozycyjne 2-20 <-> rzymskie" << std::endl
		<< std::endl
		<< " (w) wyjscie" << std::endl << std::endl;
}

void printer_t::print_positional_positional_convert(char option)
{
	system("CLS");
	std::cout << std::endl << " Zamiana z systemu pozycyjnego o podstawie ";
	(('1' == option) || ('2' == option)) ? std::cout << "2-20" : std::cout << "-2";
	std::cout << " na ";
	(('1' == option) || ('3' == option)) ? std::cout << "2-20" : std::cout << "-2";
	std::cout << std::endl << std::endl << " Podaj liczbe";
	(('1' == option) || ('2' == option)) ? std::cout << ", podstawe podanej liczby" : std::cout << "";
	(('1' == option) || ('3' == option)) ? std::cout << ", podstawe nowej liczby" : std::cout << "";
	std::cout << ":" << std::endl;
}

void printer_t::print_roman_positional_convert(char option)
{
	system("CLS");
	std::cout << std::endl << " Zamiana z systemu ";
	('4' == option) ? std::cout << "pozycyjnego o podstawie 2-20" : std::cout << "rzymskiego";
	std::cout << " na system ";
	('4' == option) ? std::cout << "rzymski" : std::cout << "pozycyjny o podstawie 2-20";
	std::cout << ":" << std::endl;
}

void printer_t::print_files_handling(char option)
{
	system("CLS");
	std::cout << std::endl << " Wygeneruj plik z testami: pozycyjne 2-20 <-> ";
	switch (option)
	{
	case '6': std::cout << "pozycyjne 2-20"; break;
	case '7': std::cout << "pozycyjny -20"; break;
	case '8': std::cout << "rzymskie"; break;
	default: break;
	}
	std::cout << ":" << std::endl;
}

void printer_t::print_repeat_module()
{
	std::cout << " (t) Czy chcesz konwertowac ponownie?" << std::endl;
}

void printer_t::print_complete_result(std::string number_arg, int base_from, int base_to, std::string number_res)
{
	std::cout << std::endl << " Liczba " << number_arg << " o podstawie " << base_from
		<< " po zamianie na liczbe o podstawie " << base_to << " ma postac " << number_res << "." << std::endl << std::endl;
}

void printer_t::print_complete_result(std::string number_arg, int base, std::string number_res, type_system_e first_number)
{
	std::cout << std::endl << " Liczba " << number_arg << " w systemie ";
	(type_system_e::positional == first_number) ? std::cout << "pozycyjnym o podstawie " << base : std::cout << "rzymskim";
	std::cout << " po zamianie na liczbe w systemie ";
	(type_system_e::positional == first_number) ? std::cout << "rzymskim" : std::cout << "pozycyjnym o podstawie " << base;
	std::cout << " ma postac " << number_res << "." << std::endl << std::endl;
}

void printer_t::print_goodbye()
{
	system("CLS");
	std::cout << std::endl << " Do zobaczenia! :)" << std::endl;
}

void printer_t::await_option()
{
	std::cout << " Podaj opcje: ";
}

/* printer.cpp */
 /********** END_OF_FILE **********/
