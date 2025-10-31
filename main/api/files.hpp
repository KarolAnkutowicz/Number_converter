/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * create: 30.10.2025
 * file: files.hpp
 */

#ifndef FILES_HPP
#define FILES_HPP

#include <fstream>

class files_t
{
public:
	files_t();
	void create_file();
	void view_file(std::string filename);
private:
	std::string create_filename();
};

#endif

/* files.hpp */
/********** END_OF_FILE **********/
