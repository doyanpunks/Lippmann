#include "Sales_item.h"

int main()
{
	int a = 234;
	int *p = &a;

	if(p)
	{
		std::cout << "p is true: " << p << std::endl;
	}
	else
	{
		std::cout << "huinya kakayato" << std::endl;
	}

	if(*p)
	{
		std::cout << "*p is true: " << *p << std::endl;
	}
	else
	{
		std::cout << "normalnaya huinya " << std::endl;
	}



	return 0;
}
