#include <stdio.h>

void gugu(int num1, int num2)
{
	int dan = 1;
	
	for(; num1<=num2; num1++)
	{
		dan=1;
		
		for(; dan<=9; dan++)
		{
			printf("%d x %d = %d\n", num1, dan, num1*dan);
		}
		
		printf("\n");
	}
	
	return;
/*	
	while(num1<=num2)
	{
		dan=1;
		
		while(dan<=9)
		{
			printf("%d x %d = %d\n", num1, dan, num1*dan);
			dan++;
		}
		num1++;
		printf("\n");
	}
	return;*/
}

int main(void)
{
	int num1, num2;
	printf("input two positive integer : \n");
	scanf("%d %d", &num1, &num2);
	
	if(num1<num2)
	{
		gugu(num1, num2);
		printf("1");
		
	}else
	{
		gugu(num2, num1);
		printf("2");
	}
	return 0;
}