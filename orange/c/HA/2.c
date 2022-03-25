#include <stdio.h>

int main(void)
{
	int n = 1;
	int a = 1;
	
	for(; n < 6; n++)
		a = a*n;
	
	printf("%d\n", a);
	
	return 0;
}