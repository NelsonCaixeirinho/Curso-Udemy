#include <iostream>
#include  <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int NumComputadores, SerialComputadores;
	NumComputadores = 100;
	SerialComputadores = 11111;
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << "\n";
	std::cout << "O valor da vari�vel NumComputadores �....: " << NumComputadores << "\n";
	std::cout  << "O valor da vari�vel SerialComputadores �: " << SerialComputadores << "\n";
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << "\n";

	system("color 02");
	system("pause");
	return 0;
}
