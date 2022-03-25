#include <stdio.h>

double recur(int num)
{
	int all=1;
	if (num>0)
	{
		all=2*recur(num-1);
	}else if(num<0)
	{
		all=0.5*recur(num+1);
	}else
	{
		return all;
	}
}

int main(void)
{
	int num;
	printf("input a integer : ");
	scanf("%d", &num);
	
	printf("%f", recur(num));
	
	return 0;
}

int main2(int num1)
{}