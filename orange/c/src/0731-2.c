#include <stdio.h>

int main(void)
{
	int total=0, num=0;
	
	printf("input integer, zero to quit : ");
	scanf("%d", &num);
	total += num;
	
	while (num!=0)
	{
		printf("input integer, zero to quit : ");
		scanf("%d", &num);
		total += num;
	}
	printf("%d\n", total);
	return 0;
}