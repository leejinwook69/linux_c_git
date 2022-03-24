#include <stdio.h>

int main(void)
{
	int num=0;
	
	printf("input decimal num, return will be hexadecimal : \n");
	scanf("%d", &num);
	
	printf("%#X\n", num);
	
	return 0;
}