#include <iostream>

int main()
{
	setlocale(LC_ALL,"portuguese");
	system("color 06");

	int escolha = 0;
	do//As instruções serão executadas pelo menos uma vez
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n  1 - Meia Entrada\n";
		std::cout << "\n  2 - Bilhete Inteiro\n";
		std::cout << "\n  3 - Sair\n\n";
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\nEscolha sua opção: ";
		std::cin >> escolha;

		system("cls");

		switch (escolha)
		{
		case 1: std::cout << "\n\tMeia Entrada\n\n";
			break;
		case 2: std::cout << "\n\tBilhete Inteiro\n\n";
			break;
		case 3: std::cout << "\t\nSaindo do Menu\n\n";
			break;
		default: std::cout << "\n\tOpção inválida!!!\n\n";
		}
	}while(escolha != 3);//Enquanto a escolha for diferente de 3 o menu vai aparecer! você está solicitando que fique em loop até que a escolha seja igual a 3 e o resultado seja falso saindo loop do-while
	
	
	
	system("pause");
	return 0;
}