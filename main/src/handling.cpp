/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 25.10.2025
 * file: handling.cpp
 */

#include "../api/handling.hpp"

handling_t::handling_t() : option{}, printer{}
{
	main_handling();
}

void handling_t::main_handling()
{
	printer.print_entrance();
	do
	{
		printer.print_main_menu();
		printer.await_option();
		std::cin >> option;
		switch (option)
		{
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
			// TODO - r�czne wprowadzanie liczb
			break;
		case '6':
		case '7':
		case '8':
			// TODO - generowanie plik�w testowych
			break;
		case 'w':
			break;
		default:
			printer.print_main_menu();
			printer.await_option();
			break;
		}
	} while ('w' != option);
	printer.print_goodbye();
}

void handling_t::positional_positional_handling()
{
	// TODO - obs�uga konwersji pomi�dzy systemami pozycyjnymi
}

void handling_t::roman_positional_handling()
{
	// TODO - obs�uga konwersji z wykorzystaniem systemu rzymskiego
}

void handling_t::files_handling()
{
	// TODO - obs�uga plik�w testowych (generowanie przyk�ad�w, rozwi�zywanie, zapis do pliku)
}

 /* handling.cpp */
 /********** END_OF_FILE **********/
