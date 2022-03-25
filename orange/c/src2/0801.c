#include <stdio.h>

int main(void)
{
	int num;
	
	for(num=1; num<100; num++)
	{
		if(num%7 ==0 || num%9 ==0) // <->	if(!(num%7) || !(num%9))
			printf("7또는 9의 배수 : %d\n", num);
	}
	
	return 0;
}