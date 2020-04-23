#include "Sales_item.h"

int main()
{
	int i = 42;
	int *p1 = &i;
	*p1 = *p1 * *p1; // 1764
	std::cout << "i: " << i << std::endl;
	return 0;
}
