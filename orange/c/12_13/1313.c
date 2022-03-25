#include <stdio.h>

int main(void)
{
	int arr[5]={1, 2, 3, 4, 5};
	int * ptr=&arr[4];
	int sum=0;
		
	
	for(; ptr!=arr-1; ptr--)
	{
		sum+=*ptr;
		printf("sum : %d\n", sum);
	}
	
	

	return 0;
}