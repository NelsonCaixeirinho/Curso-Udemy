#include <iostream>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	system("color 04");

	int Num = 0, Num1 = 0, Num2 = 0;
	//Loop infinito!
	/*Neste caso Num nunca deixar� de ser 0 e a condi��o Num <= 50 ser� sempre verdadeira! logo ficar� sempre no while!!!*/
	while ( Num <= 50 )
	{
		std::cout << Num << " " ;
		//De alguma forma voc� precisa incrementar a vari�vel Num para que ela chegue at� 50
		//Qual condi��o que para o loop?
		Num++;
	}
	std::cout << "\n\n";
	std::cout << "Pares!" << std::endl;
	while (Num1 <= 50)
	{
	
		if( Num1 % 2 == 0)
		{
			std::cout << Num1 << " "; 
		}
		Num1++;
	}
	std::cout << "\n\n";
	std::cout << "�mpares!" << std::endl;
	while (Num2 <= 50)
	{	
		if( Num2 % 2 != 0)
		{
			std::cout << Num2 << " "; 
		}
		Num2++;
	}
	std::cout << "\n";
	system("pause");
	return  0;
}