#include <iostream>

int main(void)
{

	int num = 0;
	int sum = 0;

	for(int i = 1; i < 6; i++)
	{
		std::cout<<"input number "<<i<<std::endl;
		std::cin>>num;
		sum+= num;
	}
	std::cout<<"sum : "<<sum;
	return 0;
}
