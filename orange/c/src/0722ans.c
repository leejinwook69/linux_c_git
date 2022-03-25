#include <stdio.h>

int main(void)
{
	int i=0, n=0;
	
	while(i<5)
	{
		
		while(n++<i)
		{
			printf("o");
		}
		n=0;
		i++;
		printf("*\n");
	}
	return 0;
	
}