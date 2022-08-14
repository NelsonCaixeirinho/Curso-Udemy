#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 01");

	int Num1, Num2;
	char Operacao;
	std::cout << "\nDigite um n�mero: ";
	std::cin >> Num1;
	std::cout << "\nDigite outro n�mero:";
	std::cin >> Num2;
	std::cout << "Qual a opera��o que pretende efetuar? \n+ Adi��o \n- Subtra��o \n* Multiplica��o \n/ Divis�o";
	std::cout << "\nDgite a sua op��o: ";
	std::cin >> Operacao;

	//O utilizador vai digitar um carater. Como o carater � mapeado como inteiro da tebela ASCII o switch este tipo de express�o.
	//Logo a opera��o pode ser + - * /
	switch (Operacao)
	{
	case '+':
			std::cout << "\nSoma de Num1 + Num2 = " << Num1 + Num2 << "\n";
		break;
	case '-':
		std::cout << "\nSubtra��o de Num1 - Num2 = " << Num1 - Num2 << "\n";
		break;
	case '*':
		std::cout << "\nMultiplica��o de Num1 * Num2 = " << Num1 * Num2 << "\n";
		break;
	case '/':
		std::cout << "\nDivis�o de Num1 / Num2 = " << Num1 / Num2 << "\n";
		break;
	default:
		std::cout << "\nVoc� n�o digitou um operador v�lido!" << "\n";
		break;
	}
	std::cout << "\n";
	system("pause");
}