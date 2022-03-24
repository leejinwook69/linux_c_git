#include <stdio.h>

int big_of_three(int num1, int num2, int num3)
{
		
	if(num1 >= num2)
	{
		num1 >= num3 ? printf("biggest : %d\n", num1) : printf("biggest : %d\n", num3);
	}else
	{
		num2 >= num3 ? printf("biggest : %d\n", num2) : printf("biggest : %d\n", num3);
	}
	return 0;
}

int small_of_three(int num1, int num2, int num3)
{
		
	if(num1 <= num2)
	{
		num1 <= num3 ? printf("smallest : %d\n", num1) : printf("smallest : %d\n", num3);
	}else
	{
		num2 <= num3 ? printf("smallest : %d\n", num2) : printf("smallest : %d\n", num3);
	}
	return 0;
}


int main(void)
{
	int num1, num2, num3;
	
	printf("input 3 integers : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	big_of_three(num1, num2, num3);
	small_of_three(num1, num2, num3);
	
	return 0;
}