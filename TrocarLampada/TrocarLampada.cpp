#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 02");

	bool a =  (!(10==5+5)&&(7>1))||(23==2);
	std::cout << a;
	

	system("pause");
	return 0;
}