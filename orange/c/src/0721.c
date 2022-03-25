#include <stdio.h>

int main(void)
{
	int five=5, num=0, all=0;
	
	while (five>0)
	{
		printf("input positive integer : ");
		scanf("%d", &num);
		
		while (num<1)
		{
			printf("invalild num. must be positive integer.\ninput positive integer : ");
			scanf("%d", &num);
		}
			
		all+=num;
		
		five--;
	}
	printf("sum : %d\n", all);
	return 0;
}