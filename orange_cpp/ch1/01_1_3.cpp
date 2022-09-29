#include <iostream>

int main(void)
{
	int num;

	std::cout<<"input a number"<<std::endl;
	std::cin>>num;

	for(int i = 1; i < 10; i++)
	{
		std::cout<<i*num<<std::endl;
	}

	return 0;
}

