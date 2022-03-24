#include <stdio.h>

int main(void)
{
	int num, h=0, m=0, s=0;
	
	printf("input second : ");
	scanf("%d", &num);
	
	while(num>=3600)
	{
		num-=3600;
		h++;
	}
	
	while(num>=60)
	{
		num-=60;
		m++;
	}
	while(num>0)
	{
		num-=1;
		s++;
	}
	printf("h : %d, m : %d, s : %d\n", h, m, s);
	
	return 0;
}