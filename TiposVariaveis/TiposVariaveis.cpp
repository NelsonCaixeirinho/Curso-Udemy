#include <iostream>
#include <tchar.h>
#include <iomanip>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int Numero;
	float Numero2;
	double Numero3 = 45345.904555;
	char Caratere = '3';
	char Caratere2 = 'k';
	bool bAchou;

	//Qualquer valor de zero retorna true ao ser atribuido a uma variavel do tipo bool!
	bAchou = 1;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = 0;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = true;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = false;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = 'd';
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = "1023460A";
	std::cout << "Valor de bAchou: " << bAchou << "\n";

	Numero = 45;
	Numero2 = 55.56f;
	std::cout << "Valor de Numero: " << Numero << std::endl;
	std::cout << "Tamanho da variável Numero: " << sizeof(Numero) << " Bytes" << "\n";
	std::cout << "Endereço carregado na Memória: " << &Numero << "\n";

	std::cout << "Valor de Numero2: " << Numero2 << std::endl;
	std::cout << "Tamanho da variável Numero2: " << sizeof(Numero2) << " Bytes" << "\n";
	std::cout << "Endereço carregado na Memória: " << &Numero2 << "\n";

	std::cout << "Valor de Numero3: " << std::setprecision(12) << Numero3 << std::endl;
	std::cout << "Tamanho da variável Numero3: " << sizeof(Numero3) << " Bytes" << "\n";
	std::cout << "Endereço carregado na Memória: " << &Numero3 << "\n";

	std::cout << "Valor de Caratere: " << Caratere << std::endl;
	std::cout << "Tamanho da variável Caratere: " << sizeof(Caratere) << " Bytes" << "\n";
	std::cout << "Endereço carregado na Memória: " << (void *)&Caratere << "\n";

	std::cout << "Valor de Caratere2: " << Caratere2 << std::endl;
	std::cout << "Tamanho da variável Caratere2: " << sizeof(Caratere2) << " Bytes" << "\n";
	std::cout << "Endereço carregado na Memória: " << (void *)&Caratere2 << "\n";

	system("color 02");
	system("pause");
}