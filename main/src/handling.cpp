/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 25.10.2025
 * file: handling.cpp
 */

#include "../api/handling.hpp"

handling_t::handling_t() : option{}, convert{}, printer{}
{
	printer.print_entrance();
	main_handling();
}

void handling_t::main_handling()
{
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
			positional_positional_handling(option);
			break;
		case '4':
		case '5':
			roman_positional_handling(option);
			break;
		case '6':
		case '7':
		case '8':
			files_handling(option);
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

void handling_t::positional_positional_handling(char& option)
{
	printer.print_positional_positional_convert(option);
	std::string number{}, number_temp{}, number_result{};
	int base_1{}, base_2{};
	std::cin >> number >> base_1;
	char option_loc;
	if ('1' == option)
		std::cin >> base_2;
	switch (option)
	{
	case '1': // 2-20 na 2-20
		number_result = convert.convert_positionals(number, base_1, base_2);
		break;
	case '2': // 2-20 na -2
		number_temp = convert.convert_positionals(number, base_1, 10);
		number_result = convert.convert_decimal_to_minus_two_positional(std::stoll(number_temp));
		break;
	case '3': // -2 na 2-20
		number_result = convert.convert_positionals(number, -2, base_1);
		break;
	default:
		break;
	}
	printer.print_complete_result(number, base_1, base_2, number_result);
	printer.print_repeat_module();
	std::cin >> option_loc;
	if ('t' == option_loc)
		positional_positional_handling(option);
	else
		main_handling();
}

void handling_t::roman_positional_handling(char& option)
{
	// TODO - obs³uga konwersji z wykorzystaniem systemu rzymskiego
	switch (option)
	{
	case '4': // 10 na rzymski
		break;
	case '5': // rzymski na 10
		break;
	default:
		break;
	}
}

void handling_t::files_handling(char& option)
{
	// TODO - obs³uga plików testowych (generowanie przyk³adów, rozwi¹zywanie, zapis do pliku)
	switch (option)
	{
	case '6': // pozycyjne 2-20
		break;
	case '7': // -2 <-> 2-20
		break;
	case '8': // rzymskie <-> 10
		break;
	default:
		break;
	}
}

 /* handling.cpp */
 /********** END_OF_FILE **********/
