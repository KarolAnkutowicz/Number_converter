/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 25.10.2025
 * file: printer.hpp
 */

#ifndef PRINTER_HPP
#define PRINTER_HPP

#include <iostream>

class printer_t
{
public:
	printer_t();
	void print_entrance();
	void print_main_menu();
	void print_positional_positional_convert(char option);
	void print_repeat_module();
	void print_complete_result(std::string number_arg, int base_from, int base_to, std::string number_res);
	void print_goodbye();

	void await_option();
};

#endif

 /* printer.hpp */
 /********** END_OF_FILE **********/
