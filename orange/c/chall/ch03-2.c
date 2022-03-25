#include <stdio.h>

int gcd(int num1, int num2)
{
	int a;
	
	while(a!=0)
	{
		a=num1%num2;
		num1=num2;
		num2=a;
		
	}
	
	return num1;
}

int main(void)
{
	int num1,num2;
	
	printf("input two positive integers : \n");
	scanf("%d %d", &num1, &num2);
	
	printf("GCD : %d\n", gcd(num1, num2));
		   
	return 0;
}