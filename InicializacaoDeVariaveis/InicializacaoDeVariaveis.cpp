#include <iostream>
#include <string>


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 02");
	//Você pode usar () para iniciar variáveis com valores literais.
	//{} é a inicialização uniforme, permite iniciar tanto valores literais (int, float, caratere) como valores, vetores, enums etc.
	int NumeroInteiro{12};
	float NumeroReais{34.56};
	char Caratere{'c'};
	//String é uma cadeia de carateres, é um texto que deve estar entre aspas duplas #texto da string"
	//Para declarar uma string usamos std::string
	std::string Texto{"Texto da String"};
	//%d indica que você  quer que seja colocado na string:
	//"Valor Número Inteiro = %d " o valor da variável NumeroInteiro
	std::printf("Valor Número Inteiro = %d \n", NumeroInteiro);
	//%d é chamnado de especificador de formato
	std::printf("Valor Número Real = %.2f \n", NumeroReais);
	/*
	%d Número decimal inteiro (int).
	%f	 Número decimal de ponto flutuante. serve tanto para float como para double.
	%lf  Serve para double. (l-long , f-float - lf)
	%c	 Caractere: imprime o caractere que tem o código ASCII correspondente ao valor dado.
	%s	 Sequência de caracteres (string, em inglês).
	*/

	std::printf("Valor Número Real = %c \n", Caratere);
	

	system("pause");
	return 0;
}