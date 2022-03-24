#include <stdio.h>

int main(void)
{
	int n=1, dan=1;
	
	for(; n<10; n++)
	{
		dan=1;
		
		while(dan<10)
		{
			printf("%d x %d = %d\n", n, dan, n*dan);
			dan++;
		}
	}
	return 0;
	
}