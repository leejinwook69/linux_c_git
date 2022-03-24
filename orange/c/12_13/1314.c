#include <stdio.h>

int main(void)
{
	int arr[6]={1, 2, 3, 4, 5, 6};
	int* ptr1=arr;
	int* ptr2=&arr[5];
	int tmp, i;
	
	for(; ptr1<ptr2; ptr1++, ptr2--)
	{
		tmp=*ptr1;
		*ptr1=*ptr2;
		*ptr2=tmp;
	}
	
	for(i=0; i!=6; i++)
	{
		printf("arr[%d] : %d\n", i, arr[i]);
	}
	
	return 0;
}