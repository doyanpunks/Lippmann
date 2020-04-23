// exercises 2.15, 2.16

#include "Sales_item.h"
/* 2.15
int main()
{
	int ival = 1.01; // valid but 1.01 will be truncated to 1;
	//int &rval1 = 1.01; // this will cause an error
	int &rval2 = ival; // valid, rval2 = 1
	//int &rval3; // not valid
	std::cout << "ival: " << ival << std::endl;
	std::cout << "rval2: " << rval2 << std::endl;
	return 0;
}
*/
/* 2.16
int main()
{
	int i = 10, &r1 = i;
	double d = 0, &r2 = d;
	r2 = 3.14159;
	r2 = r1;
	i = r2;
	r1 = d;
	std::cout << "i: " << i << std::endl;
	std::cout << "r1: " << r1 << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "r2: " << r2 << std::endl;
	return 0;
}
*/

int main()
{
	int i, &ri = i;
	i = 5; ri = 10;
	std::cout << i << " " << ri << std::endl;
	return 0;
}
