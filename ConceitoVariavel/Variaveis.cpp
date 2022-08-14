#include <iostream>
#include <tchar.h>

int main()
{
	//Função que configura o condole windows para mostrar acentos
	_tsetlocale(LC_ALL, _T("portuguese"));

	//Declação de Variáveis
	//Primeiro colocamos qual o tipo de variável que desejamos que
	//o computador crie ao executar nosso programa
	//neste caso escolhemos ambas omo int(integer)
	//ou seja o local de memória que estamos solicitando ao computador
	//deve ser capaz de armazenar números inteiros
	int NumVidas = 5;
	//Acima o computador irá alocar um espaço de memória do tipo inteiro

	int Pontuacao = 1350;
	//depois vai até este local na RAM e vaio colocar o valor de 1350
	
	std::cout << "*************************************************************" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação....: " << Pontuacao << std::endl;
	std::cout << "Tamanho que NumVidas ocupa na Memória RAM..: " << sizeof(NumVidas) << " bytes" << "\n";
	std::cout << "Tamanho que Pontuação ocupa na Memória RAM.: " << sizeof(Pontuacao) << " bytes" << "\n";
	std::cout << "Endereço que NumVidas ocupa na Memória RAM.: " << &NumVidas << "\n";
	std::cout << "Endereço que Pontuação ocupa na Memória RAM: " << &Pontuacao << "\n";
	std::cout << "*************************************************************" << std::endl;

	std::cout << "*******DURANTE O JOGO*******" << std::endl;

	//Vá até a região de memória rotulada com o nome de Pontuacao e coloque
	//agora em soma do valor que está contido nela e subtraia -1	
	Pontuacao += + 150;
	NumVidas -= - 1;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontução.....: " << Pontuacao << std::endl;
	std::cout << "****************************" << std::endl;


	system("color 02");
	system("pause");
	
}