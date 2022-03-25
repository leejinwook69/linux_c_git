#include <stdio.h>

int main (void)
{
	int num;
	printf("input a integer : ");
	scanf("%d",&num);
	printf("negetive : %d \n", ~num+1);
	return 0;
}