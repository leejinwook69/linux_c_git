#include <stdio.h>

int main(void)
{
	int num1=0, num2=0, total=0, num3=0;
	printf("input two integers, second one bigger : ");
	scanf("%d %d", &num1, &num2);
	
	num3 = num2-num1+1;
	
	while(num1<=num2)
	{
		total+=num1;
		num1++;
	}
	
	printf("average of function : %d\n", total/num3);
	return 0;
	
}