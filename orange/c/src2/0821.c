#include <stdio.h>

int main(void)
{
	int n=2, dan=2;
	
	printf("for n x n : \n");
	
	for(n=2; n<10; n+=2)
	{
				
		for(dan=1; dan<10; dan++)
		{
			
			printf("%d x %d = %d\n", n, dan, n*dan);
			
			if(n<=dan)
				break;
			
		}
	}
	
	return 0;

}