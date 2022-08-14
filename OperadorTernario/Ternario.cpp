#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 03");

	double MaiorNumero, Numero01, Numero02;
	std::cout << "Digite o primeiro número: ";
	std::cin >> Numero01;
	std::cout << "Digite o segundo número: ";
	std::cin >> Numero02;

	//Neste caso o operador ternário está a ser utilizado para atribuir um valor a uma variável
	//Se o Numero01 for maior que o Numero02 a variável recebe Numero01
	//SE o Numero02 for maior que o Numero01 a variável recebe Numero02
	MaiorNumero = (Numero01 > Numero02) ? Numero01 : Numero02;
	
	std::cout << "\nMaior número digitado: " << MaiorNumero << "\n";
	//Aqui o operador ? está sendo utilizado para decidir que comando será executado. Se for true o primeiro std:: vai para o ecrã
	//Se for false o segundo stdd:: vai para o ecrã
	(Numero01 > Numero02) ? std::cout << "Numero01 maior que Numero02" << "\n" : std::cout << "Numero02 maior que o Numero01" << "\n";
	
	system("pause");
}