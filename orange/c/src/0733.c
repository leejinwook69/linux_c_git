#include <stdio.h>

int main(void)
{
	int num=1, dan=1;
	
	do{
		dan=1;
		do{
			
		printf("%d x %d = %d\n", num, dan, num*dan);
		dan++;
			
		}while(dan<=9);
		
		num++;
		
	}while(num<=9);
	
	return 0;
}