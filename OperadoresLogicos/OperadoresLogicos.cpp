#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 02");

	double Numero;
	bool MaiorQue100;
	std::cout << "Digite um N�mero: ";
	std::cin >> Numero;
	std::cout << "True = 1 e False = 0" << "\n";
	//A vari�vel booleana MaioeQue100 ir� receber
	//o valor l�gico da compara��o ( Numero > 100)
	//Numero � maior que cem?
	MaiorQue100 = (Numero > 100);
	std::cout << "O resultado l�gico que verifica se o Numero � maior que 100 �: " << MaiorQue100 << std::endl;

	double Numero1;
	bool ResultadoLogico;
	bool ResultadoLogico2;
	std::cout << "Digite um N�mero: ";
	std::cin >> Numero1;
	std::cout << "True = 1 e False = 0" << "\n";
	//A vari�vel booleana MaioeQue100 ir� receber
	//o valor l�gico da compara��o ( Numero > 100)
	//Numero � maior que cem?
	ResultadoLogico = (Numero1 > 100) && (Numero1 != 0);
	std::cout << "O resultado l�gico da express�o (Numero > 100) && (Numero != 0) �: " << ResultadoLogico << std::endl;
	ResultadoLogico2 = ((Numero1 == 100) || (Numero1 > 200)) && (Numero < 1000);
	std::cout << "O resultado l�gico da express�o ((Numero1 == 100) || (Numero1 < 200)) && (Numero < 1000) �: " << ResultadoLogico2 << std::endl;


	system("pause");
	return 0;
}