#include <iostream>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	system("color 04");

	int Num = 0, Num1 = 0, Num2 = 0;
	//Loop infinito!
	/*Neste caso Num nunca deixará de ser 0 e a condição Num <= 50 será sempre verdadeira! logo ficará sempre no while!!!*/
	while ( Num <= 50 )
	{
		std::cout << Num << " " ;
		//De alguma forma você precisa incrementar a variável Num para que ela chegue até 50
		//Qual condição que para o loop?
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
	std::cout << "Ímpares!" << std::endl;
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