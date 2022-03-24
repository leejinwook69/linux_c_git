#include <stdio.h>

int main(void)
{
	int num=0, total=0;
	
		printf("sum of even numbers in 0~100 : ");
	
	do{
		
		total+=num;
		num=num+2;
		
		
	}while(num<=100);
	
	printf("%d\n", total);
	return 0;
}