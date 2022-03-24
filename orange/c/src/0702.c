#include <stdio.h>

int main(void)
{
	int num=0, n=1;
	printf("input positive integer : ");
	scanf("%d", &num);
	
	while (n<=num) // while(n++<=num) 과 같이 후위연산 이용 가능
	{
		printf("%d ", 3*n);
		n++;
	}
	return 0;
	
}