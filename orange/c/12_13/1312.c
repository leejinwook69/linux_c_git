#include <stdio.h>

int main(void)
{
	int i=0;
	int arr[5]={1, 2, 3, 4, 5};
	int *ptr=arr;
	
	*ptr+=2;
	*(ptr+1)+=2;
	*(ptr+2)+=2;
	*(ptr+3)+=2;
	*(ptr+4)+=2;
	
	for(i; i<5; i++)
		printf("%d\n", arr[i]);
	return 0;
}