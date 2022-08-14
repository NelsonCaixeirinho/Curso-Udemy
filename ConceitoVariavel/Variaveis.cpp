#include <iostream>
#include <tchar.h>

int main()
{
	//Fun��o que configura o condole windows para mostrar acentos
	_tsetlocale(LC_ALL, _T("portuguese"));

	//Decla��o de Vari�veis
	//Primeiro colocamos qual o tipo de vari�vel que desejamos que
	//o computador crie ao executar nosso programa
	//neste caso escolhemos ambas omo int(integer)
	//ou seja o local de mem�ria que estamos solicitando ao computador
	//deve ser capaz de armazenar n�meros inteiros
	int NumVidas = 5;
	//Acima o computador ir� alocar um espa�o de mem�ria do tipo inteiro

	int Pontuacao = 1350;
	//depois vai at� este local na RAM e vaio colocar o valor de 1350
	
	std::cout << "*************************************************************" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o....: " << Pontuacao << std::endl;
	std::cout << "Tamanho que NumVidas ocupa na Mem�ria RAM..: " << sizeof(NumVidas) << " bytes" << "\n";
	std::cout << "Tamanho que Pontua��o ocupa na Mem�ria RAM.: " << sizeof(Pontuacao) << " bytes" << "\n";
	std::cout << "Endere�o que NumVidas ocupa na Mem�ria RAM.: " << &NumVidas << "\n";
	std::cout << "Endere�o que Pontua��o ocupa na Mem�ria RAM: " << &Pontuacao << "\n";
	std::cout << "*************************************************************" << std::endl;

	std::cout << "*******DURANTE O JOGO*******" << std::endl;

	//V� at� a regi�o de mem�ria rotulada com o nome de Pontuacao e coloque
	//agora em soma do valor que est� contido nela e subtraia -1	
	Pontuacao += + 150;
	NumVidas -= - 1;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontu��o.....: " << Pontuacao << std::endl;
	std::cout << "****************************" << std::endl;


	system("color 02");
	system("pause");
	
}