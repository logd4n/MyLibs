#include "iostream"
#include "Windows.h"
#include "conio.h"

void intro()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, 12);

	std::cout << "</Created by LOG>\n" << std::endl;

	SetConsoleTextAttribute(handle, 7);
}