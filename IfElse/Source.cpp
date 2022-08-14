#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 02");

	bool bFezSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso;
	std::string SenhaDeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	std::cin >> SenhaDigitada;

	/*Se a senha digitada pelo utilizador e armazenada na variável SenhaDigitada for igual à senha de acesso as instruções após o if serão executadas pois a condição foi verdadeira true 1 */
	if(SenhaDigitada == SenhaDeAcesso)
	{
		std::cout << "\nAcesso Permitido!" << "\n";
		//aqui aproveitamos para indicar que o acesso foi concedido
		//através de outra variável booleana dAcesso
		bAcesso = true;
		//system("pause");
	}
	/*Se a condição for falsa então as instruções do else serão executadas*/
	else
	{
		std::cout << "\nAcesso negado!!!" << "\n";
		system("pause");
		exit(0);//Sai do programa, força o fechamento da aplicação
	}
	bFezSol = false; 
	bCarroPronto = false; 
	bSalarioDepositado = false;
	//Aqui podemos deixar apenas a variável não é necessário == pois será retornado o valor de bAcesso e ficará assim:
	//if (true) ou if (false)
	if(bAcesso)
	{
		if(bFezSol || bCarroPronto || bSalarioDepositado)
		{
			std::cout << "\nVamos à praia!!!" << std::endl;
		}
		//Aqui será executado se a condição do if falhar e se bSalarioDepositado for false
		//Da mesma forma aqui
		//Como bSalarioDepositado é falso dará true e sai no else if
		else if(!bSalarioDepositado == true)
		{
			std::cout << "\nNão vamos à praia, o salário também não foi depositado!!!" << "\n";
		}
		system("pause");
	}

	
	//return 0;
}