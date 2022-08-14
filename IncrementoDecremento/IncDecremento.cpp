#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 02");

	int Num1{10}, Num2{20}, Resultado;
		//Num2 ++ é omesmo que Num2 = Num2 + 1;
	/*aNo entanto se ++ vier depois daq variável devemos ler da seguinte forma Num2++ Pegue logo o valor da variávelh Num2 e somente depois da instrução incremente em 1 o valor de Num2.
	 *Logo Num1 = Num2++ é equivalente as seguintes indtruções:
	 *Num1 = Num2;
	 *Num2 = Num2 + 1;
	 *chamamos isso de pós-fixado
	 *Assim se o ++ ou -- estiver após a variável ela somente será incrementada após a execução da instrução
	 */
		//Agora temos outra situação. O operador está pré-fixado
	/*Assim a instrução seria equivalente a;
	 * Num1 = Num1 + 1;
	 * Num2 = Num1;
	 * ou seja se o valor estiver pré-fixado primeiro a variável será incrementada de 1 para depois ser atribuida a outra variável0
	 */
	std::cout << "Valor atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	Num1 = Num2++;
	std::cout << "Valor atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	Num2 = ++Num1;
	std::cout << "Valor atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";


	system("pause");
	return 0;
}