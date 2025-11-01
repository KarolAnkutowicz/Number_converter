/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 25.10.2025
 * file: handling.cpp
 */

#include "../api/handling.hpp"

handling_t::handling_t() : option{}, convert{}, printer{}, files{}
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
	std::string number{}, number_result{};
	int base_1{}, base_2{};
	char option_loc;

	printer.print_positional_positional_convert(option);
	std::cin >> number >> base_1;
	if ('1' == option)
		std::cin >> base_2;
	switch (option)
	{
	case '1': // 2-20 na 2-20
		if (10 == base_1)
			number_result = convert.convert_decimal_to_positive_positional(std::stoll(number), base_2);
		else if (10 == base_2)
			number_result = std::to_string(convert.convert_positive_positional_to_decimal(number, base_1));
		else
			number_result = convert.convert_decimal_to_positive_positional(convert.convert_positive_positional_to_decimal(number, base_1), base_2);
		break;
	case '2': // 2-20 na -2
		(10 == base_1) ? number_result = convert.convert_decimal_to_minus_two_positional(std::stoll(number))
			: number_result = convert.convert_decimal_to_minus_two_positional(convert.convert_positive_positional_to_decimal(number, base_1));
		break;
	case '3': // -2 na 2-20
		(10 == base_1) ? number_result = std::to_string(convert.convert_minus_two_positional_to_decimal(number))
			: number_result = convert.convert_decimal_to_positive_positional(convert.convert_minus_two_positional_to_decimal(number), base_1);
		break;
	default:
		break;
	}
	printer.print_complete_result(number, base_1, base_2, number_result);
	printer.print_repeat_module();
	std::cin >> option_loc;
	('t' == option_loc) ? positional_positional_handling(option) : main_handling();
}

void handling_t::roman_positional_handling(char& option)
{
	std::string number{}, number_temp{}, number_result{};
	unsigned long long number_temp_roman{};
	int base;
	type_system_e type_system = type_system_e::positional;
	char option_loc;

	printer.print_roman_positional_convert(option);
	std::cin >> number >> base;
	switch (option)
	{
	case '4': // pozycyjny na rzymski
		number_temp /*= convert.convert_positive_positionals(number, base, 10)*/;
		number_result = convert.convert_decimal_to_roman(std::stoll(number_temp));
		break;
	case '5': // rzymski na pozycyjny
		number_temp_roman = convert.convert_roman_to_decimal(number);
		number_result /*= convert.convert_positive_positionals(std::to_string(number_temp_roman), 10, base)*/;
		type_system = type_system_e::roman;
		break;
	default:
		break;
	}
	printer.print_complete_result(number, base, number_result, type_system);
	printer.print_repeat_module();
	std::cin >> option_loc;
	('t' == option_loc) ? roman_positional_handling(option) : main_handling();
}

void handling_t::files_handling(char& option)
{
	std::string filename{};

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
