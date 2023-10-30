#include <string>
#include <Windows.h>
#include <map>

void setcolor(std::string color_name)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

	std::map <std::string, int> colors = { {"Black", 1}, {"Blue", 2}, {"Green", 3}, {"Cyan", 4}, {"Red", 5}, {"Magenta", 6},
	{"Brown", 7 }, {"LightGray", 8 }, {"DarkGray", 9 }, {"LightBlue", 10 }, {"LightGreen", 11 }, {"LightCyan", 12 },
	{"LightRed", 13}, {"LightMagenta", 14}, {"Yellow", 15}, {"White", 16} };

	switch (colors[color_name])
	{
	case 1:
		SetConsoleTextAttribute(handle, 0);
		break;
	case 2:
		SetConsoleTextAttribute(handle, 1);
		break;
	case 3:
		SetConsoleTextAttribute(handle, 2);
		break;
	case 4:
		SetConsoleTextAttribute(handle, 3);
		break;
	case 5:
		SetConsoleTextAttribute(handle, 4);
		break;
	case 6:
		SetConsoleTextAttribute(handle, 5);
		break;
	case 7:
		SetConsoleTextAttribute(handle, 6);
		break;
	case 8:
		SetConsoleTextAttribute(handle, 7);
		break;
	case 9:
		SetConsoleTextAttribute(handle, 8);
		break;
	case 10:
		SetConsoleTextAttribute(handle, 9);
		break;
	case 11:
		SetConsoleTextAttribute(handle, 10);
		break;
	case 12:
		SetConsoleTextAttribute(handle, 11);
		break;
	case 13:
		SetConsoleTextAttribute(handle, 12);
		break;
	case 14:
		SetConsoleTextAttribute(handle, 13);
		break;
	case 15:
		SetConsoleTextAttribute(handle, 14);
		break;
	case 16:
		SetConsoleTextAttribute(handle, 15);
		break;
	default:
		SetConsoleTextAttribute(handle, 7);
	}
}