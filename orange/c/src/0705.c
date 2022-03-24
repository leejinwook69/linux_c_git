#include <stdio.h>

int main(void)

{
	int maxnum, max=0; 
	int num=0;
	double average=0;
	
	printf("how many? : ");
	scanf("%d", &maxnum);
	max=maxnum;
	
	while (maxnum>0)
	{
		printf("input integer, remain (%d)\n", maxnum);
		scanf("%d", &num);
		average += num;
		
		maxnum--;
	}
	printf("average : %f", average/max);
	return 0;
	
}