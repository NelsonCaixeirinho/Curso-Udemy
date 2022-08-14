#include <iostream>

//Nelson Caixeirinho
//Data: 09/08/2022
/*O Programa a seguir coloca na tela a frase : Vou aprender a
programar na linguagem C++. Contudo cada palavra será exibida
em uma única linha através da inserção de quebra de linha*/

int main()
{
	std::cout << "Vou" << std::endl << "Aprender" << std::endl << "a" << std::endl << "Programar" << std::endl << "na"
		<< std::endl << "Linguagem" << std::endl << "C++" << std::endl;
	std::cout << " Vou\n Aprender\n a\n Programar\n na\n Linguagem\n C++\n" << std::endl;

	system("pause");
	return 0;
}