#include "Sales_item.h"
#include <stdio.h>


int main()
{
	double obj = 3.14, *pd = &obj;
	void *pv = &obj;
	pv = pd;
	bool flag = (pv == pd);

	std::cout << "*pd: " << *pd << std::endl; // 3.14
	std::cout << "pd: " << pd << std::endl;	// address of obj

	std::cout << "pv: " << pv << std::endl; // address of obj
	
	if(flag)
	{
		std::cout << "pv = pd: "<< flag << std::endl;
	}
	return 0;
}
