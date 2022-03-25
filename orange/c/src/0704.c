#include <stdio.h>

int main(void)
{
	int num=0, dan=9;
	
	printf("input num : ");
	scanf("%d", &num);
	
	while (dan>0)
	{
		printf("%d\n", num*dan);
		dan--;
	
	}
	return 0;
}