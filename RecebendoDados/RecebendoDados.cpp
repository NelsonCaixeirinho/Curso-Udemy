#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL,_T("portuguese"));
	system("color 02");

	int Numero01, Numero02;
	std::cout << "Digite o primeiro n�mero: ";
	std::cin >> Numero01;
	std::cout << "Digite o segundo n�mero: ";
	std::cin >> Numero02;
	std::cout << "Numero01 = " << Numero01 << std::endl;
	std::cout << "Numero02 = " << Numero02 << std::endl; 

	system("pause");
	return 0;
}