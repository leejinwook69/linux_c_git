#include <stdio.h>

int main(void)
{
	int num1, num2;
	
	printf("input two integer for subtraction : ");
	scanf("%d %d", &num1, &num2);
	
	printf(": %d\n",(num1>num2) ? (num1-num2) : (num2-num1));
	
	return 0;
	
}