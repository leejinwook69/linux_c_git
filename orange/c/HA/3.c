#include <stdio.h>

void mul(void)
{
	int n = 1;
	int a = 1;
	
	for(; n < 6; n++)
		a = a*n;
	
	printf("%d\n", a);
	
	return;
}

int main(void)
{
	mul();
	
	return 0;
}