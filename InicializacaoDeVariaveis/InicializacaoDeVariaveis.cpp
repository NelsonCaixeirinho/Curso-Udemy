#include <iostream>
#include <string>


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 02");
	//Voc� pode usar () para iniciar vari�veis com valores literais.
	//{} � a inicializa��o uniforme, permite iniciar tanto valores literais (int, float, caratere) como valores, vetores, enums etc.
	int NumeroInteiro{12};
	float NumeroReais{34.56};
	char Caratere{'c'};
	//String � uma cadeia de carateres, � um texto que deve estar entre aspas duplas #texto da string"
	//Para declarar uma string usamos std::string
	std::string Texto{"Texto da String"};
	//%d indica que voc�  quer que seja colocado na string:
	//"Valor N�mero Inteiro = %d " o valor da vari�vel NumeroInteiro
	std::printf("Valor N�mero Inteiro = %d \n", NumeroInteiro);
	//%d � chamnado de especificador de formato
	std::printf("Valor N�mero Real = %.2f \n", NumeroReais);
	/*
	%d N�mero decimal inteiro (int).
	%f	 N�mero decimal de ponto flutuante. serve tanto para float como para double.
	%lf  Serve para double. (l-long , f-float - lf)
	%c	 Caractere: imprime o caractere que tem o c�digo ASCII correspondente ao valor dado.
	%s	 Sequ�ncia de caracteres (string, em ingl�s).
	*/

	std::printf("Valor N�mero Real = %c \n", Caratere);
	

	system("pause");
	return 0;
}