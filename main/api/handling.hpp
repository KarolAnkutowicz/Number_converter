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
	handling_t();
private:
	void main_handling();
	void positional_positional_handling();
	void roman_positional_handling();
	void files_handling();
	char option;
	printer_t printer;
};

#endif

 /* handling.hpp */
 /********** END_OF_FILE **********/
