#include "Sales_item.h"

int main()
{
	int i = 0;

	//double* dp = &i;
	//int *ip = i;
	int *p = &i;
	
	std::cout << "*p: " << *p << std::endl;
	std::cout << "p: " << p << std::endl;
	return 0;
}
