#include <stdio.h>

int main(void)
{
	int num1=0;
	printf("continue? : ");
	
	do
	{
		num1++;
		if(num1%2==0)
			continue;
		
		printf("%d",num1);
	
	}while(num1<10);
	
		
	return 0;
}