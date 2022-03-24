#include <stdio.h>

int main(void)
{
	int num=0, n=1; // 0이 아닌 다른 아무 숫자로 선언하면 됨.
	
	while(n!=0)
	{
	printf("input integer, 0 to qiut : ");
	scanf("%d", &n);
	num+=n;
	}
	printf("%d\n", num);
	return 0;
}