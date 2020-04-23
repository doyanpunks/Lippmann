#include "Sales_item.h"

int main()
{
	double pi = 3.14159;
	double notpi = 3434.34232;
	double *dp = &pi;

	*dp = 6.34;
	
	std::cout << "pi: " << pi << std::endl;
	std::cout << "*dp: " << *dp << std::endl;

	std::cout << "after" << std::endl;
	dp = &notpi;
	std::cout << "*dp: " << *dp << std::endl;
	return 0;
}
