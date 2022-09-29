#include <iostream>

int main(void)
{
	float sales;
	while(1)
	{
		std::cout<<"input sour sales, -1 to end"<<std::endl;
		std::cin>>sales;
		if(sales == -1)
			break;
		std::cout<<"your monthly income will be : "<<50+sales*0.12<<std::endl;
	}

	return 0;
}
