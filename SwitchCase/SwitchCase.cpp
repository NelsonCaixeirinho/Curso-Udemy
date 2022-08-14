#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 01");

	int Num1, Num2;
	char Operacao;
	std::cout << "\nDigite um número: ";
	std::cin >> Num1;
	std::cout << "\nDigite outro número:";
	std::cin >> Num2;
	std::cout << "Qual a operação que pretende efetuar? \n+ Adição \n- Subtração \n* Multiplicação \n/ Divisão";
	std::cout << "\nDgite a sua opção: ";
	std::cin >> Operacao;

	//O utilizador vai digitar um carater. Como o carater é mapeado como inteiro da tebela ASCII o switch este tipo de expressão.
	//Logo a operação pode ser + - * /
	switch (Operacao)
	{
	case '+':
			std::cout << "\nSoma de Num1 + Num2 = " << Num1 + Num2 << "\n";
		break;
	case '-':
		std::cout << "\nSubtração de Num1 - Num2 = " << Num1 - Num2 << "\n";
		break;
	case '*':
		std::cout << "\nMultiplicação de Num1 * Num2 = " << Num1 * Num2 << "\n";
		break;
	case '/':
		std::cout << "\nDivisão de Num1 / Num2 = " << Num1 / Num2 << "\n";
		break;
	default:
		std::cout << "\nVocê não digitou um operador válido!" << "\n";
		break;
	}
	std::cout << "\n";
	system("pause");
}