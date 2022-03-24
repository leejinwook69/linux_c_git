#include <stdio.h>

int main(void)
{
	int num=0, fac=1;
	printf("input integer : ");
	scanf("%d", &num);
	
	for(; num>0; num--)
	{
		fac *= num;
	}
	
	printf("factorial : %d\n", fac);
	return 0;
}