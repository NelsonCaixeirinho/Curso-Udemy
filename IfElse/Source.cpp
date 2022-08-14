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

	/*Se a senha digitada pelo utilizador e armazenada na vari�vel SenhaDigitada for igual � senha de acesso as instru��es ap�s o if ser�o executadas pois a condi��o foi verdadeira true 1 */
	if(SenhaDigitada == SenhaDeAcesso)
	{
		std::cout << "\nAcesso Permitido!" << "\n";
		//aqui aproveitamos para indicar que o acesso foi concedido
		//atrav�s de outra vari�vel booleana dAcesso
		bAcesso = true;
		//system("pause");
	}
	/*Se a condi��o for falsa ent�o as instru��es do else ser�o executadas*/
	else
	{
		std::cout << "\nAcesso negado!!!" << "\n";
		system("pause");
		exit(0);//Sai do programa, for�a o fechamento da aplica��o
	}
	bFezSol = false; 
	bCarroPronto = false; 
	bSalarioDepositado = false;
	//Aqui podemos deixar apenas a vari�vel n�o � necess�rio == pois ser� retornado o valor de bAcesso e ficar� assim:
	//if (true) ou if (false)
	if(bAcesso)
	{
		if(bFezSol || bCarroPronto || bSalarioDepositado)
		{
			std::cout << "\nVamos � praia!!!" << std::endl;
		}
		//Aqui ser� executado se a condi��o do if falhar e se bSalarioDepositado for false
		//Da mesma forma aqui
		//Como bSalarioDepositado � falso dar� true e sai no else if
		else if(!bSalarioDepositado == true)
		{
			std::cout << "\nN�o vamos � praia, o sal�rio tamb�m n�o foi depositado!!!" << "\n";
		}
		system("pause");
	}

	
	//return 0;
}