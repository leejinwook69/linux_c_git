#include <stdio.h>

int main(void)
{
	int n=1, dan=1;
	
	while(n<10)
	{
		dan=1;
		
		for(; dan<10; dan++)
		{
			printf("%d x %d = %d\n", n, dan, n*dan);
		}
			
		n++;
	}
	return 0;
}