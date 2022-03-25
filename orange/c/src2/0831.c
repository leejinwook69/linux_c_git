#include <stdio.h>

int main(void)
{
	int n, sw;
	
	printf("input a integer : ");
	scanf("%d", &n);
	
	sw = n/10;
	
	switch(sw)
	{
		case 0:
			printf("0 이상 10 미만\n");
			break;
		case 1:
			printf("10 이상 20 미만\n");
			break;
		case 2:
			printf("20 이상 30 미만\n");
			break;
		default:
			printf("30 이상\n");
	}
	
	return 0;
}