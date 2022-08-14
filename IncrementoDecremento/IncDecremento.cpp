#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 02");

	int Num1{10}, Num2{20}, Resultado;
		//Num2 ++ � omesmo que Num2 = Num2 + 1;
	/*aNo entanto se ++ vier depois daq vari�vel devemos ler da seguinte forma Num2++ Pegue logo o valor da vari�velh Num2 e somente depois da instru��o incremente em 1 o valor de Num2.
	 *Logo Num1 = Num2++ � equivalente as seguintes indtru��es:
	 *Num1 = Num2;
	 *Num2 = Num2 + 1;
	 *chamamos isso de p�s-fixado
	 *Assim se o ++ ou -- estiver ap�s a vari�vel ela somente ser� incrementada ap�s a execu��o da instru��o
	 */
		//Agora temos outra situa��o. O operador est� pr�-fixado
	/*Assim a instru��o seria equivalente a;
	 * Num1 = Num1 + 1;
	 * Num2 = Num1;
	 * ou seja se o valor estiver pr�-fixado primeiro a vari�vel ser� incrementada de 1 para depois ser atribuida a outra vari�vel0
	 */
	std::cout << "Valor atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	Num1 = Num2++;
	std::cout << "Valor atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	Num2 = ++Num1;
	std::cout << "Valor atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";


	system("pause");
	return 0;
}