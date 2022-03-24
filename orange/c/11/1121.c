#include <stdio.h>

int main(void)
{
	char arrin[50];
	int num, i;
	
	printf("input a string : ");
	scanf("%s", arrin);
	
	for(i=0; arrin[i]!=0; i++)
	{
		num=i+1;
	}
	
	printf("%d\n", num);
	
	return 0;
}