#include <stdio.h>

int gcd(int num1, int num2)
{
	int gcd=1, n=1;
	
	while(n<=num1)
	{
		if(num1%n == 0 && num2%n==0)
		{
			gcd=n;
		}
		n++;
	}
	return gcd;
}

int main(void)
{
	int num1, num2;
	printf("input two positive integers :\n ");
	scanf("%d %d", &num1, &num2);
	printf("Greatest Common Divisor : %d\n", gcd(num1, num2));
	return 0;
}