#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 03");

	double MaiorNumero, Numero01, Numero02;
	std::cout << "Digite o primeiro n�mero: ";
	std::cin >> Numero01;
	std::cout << "Digite o segundo n�mero: ";
	std::cin >> Numero02;

	//Neste caso o operador tern�rio est� a ser utilizado para atribuir um valor a uma vari�vel
	//Se o Numero01 for maior que o Numero02 a vari�vel recebe Numero01
	//SE o Numero02 for maior que o Numero01 a vari�vel recebe Numero02
	MaiorNumero = (Numero01 > Numero02) ? Numero01 : Numero02;
	
	std::cout << "\nMaior n�mero digitado: " << MaiorNumero << "\n";
	//Aqui o operador ? est� sendo utilizado para decidir que comando ser� executado. Se for true o primeiro std:: vai para o ecr�
	//Se for false o segundo stdd:: vai para o ecr�
	(Numero01 > Numero02) ? std::cout << "Numero01 maior que Numero02" << "\n" : std::cout << "Numero02 maior que o Numero01" << "\n";
	
	system("pause");
}