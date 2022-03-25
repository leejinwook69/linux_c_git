#include <stdio.h>

int main(void)
{
	int arr[5]={1, 2, 3, 4, 5};
	int *ptr=arr;
	printf("*ptr : %d\n", *ptr);
	*ptr+=2;
	printf("*ptr : %d\n", *ptr);
	ptr++;
	*ptr+=2;
	printf("*ptr : %d\n", *ptr);
	ptr++;
	*ptr+=2;
	printf("*ptr : %d\n", *ptr);
	ptr++;
	*ptr+=2;
	printf("*ptr : %d\n", *ptr);
	ptr++;
	*ptr+=2;
	printf("*ptr : %d\n", *ptr);
	
	return 0;
	
}