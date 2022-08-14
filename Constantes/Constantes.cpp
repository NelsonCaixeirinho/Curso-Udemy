#include <iostream>
#include <tchar.h>



int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	const int NUM_VIDAS = 10;
	int TotalDeVidas;
	TotalDeVidas = NUM_VIDAS - 1;
	std::cout << "Total de Vidas: " << TotalDeVidas << "\n";
	std::cout << "Valor Constante NUM_VIDAS: " << NUM_VIDAS << "\n";
	std::cout << "Endereço de Memória de NUM_VIDAS: " << &NUM_VIDAS << "\n";

	system("color 02");
	system("pause");
	return 0;
}