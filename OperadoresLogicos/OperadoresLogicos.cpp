#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 02");

	double Numero;
	bool MaiorQue100;
	std::cout << "Digite um Número: ";
	std::cin >> Numero;
	std::cout << "True = 1 e False = 0" << "\n";
	//A variável booleana MaioeQue100 irá receber
	//o valor lógico da comparação ( Numero > 100)
	//Numero é maior que cem?
	MaiorQue100 = (Numero > 100);
	std::cout << "O resultado lógico que verifica se o Numero é maior que 100 é: " << MaiorQue100 << std::endl;

	double Numero1;
	bool ResultadoLogico;
	bool ResultadoLogico2;
	std::cout << "Digite um Número: ";
	std::cin >> Numero1;
	std::cout << "True = 1 e False = 0" << "\n";
	//A variável booleana MaioeQue100 irá receber
	//o valor lógico da comparação ( Numero > 100)
	//Numero é maior que cem?
	ResultadoLogico = (Numero1 > 100) && (Numero1 != 0);
	std::cout << "O resultado lógico da expressão (Numero > 100) && (Numero != 0) é: " << ResultadoLogico << std::endl;
	ResultadoLogico2 = ((Numero1 == 100) || (Numero1 > 200)) && (Numero < 1000);
	std::cout << "O resultado lógico da expressão ((Numero1 == 100) || (Numero1 < 200)) && (Numero < 1000) é: " << ResultadoLogico2 << std::endl;


	system("pause");
	return 0;
}