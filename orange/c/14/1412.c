#include <stdio.h>

void Swap3(int* ptr1, int* ptr2, int* ptr3)
{
	int tmp;
	
	tmp=*ptr2;
	*ptr2=*ptr1;
	*ptr1=tmp;
	//*ptr1 < *ptr2 / *ptr2 < *ptr1 / *ptr3 < *ptr3 / tmp < *ptr2
	
	tmp=*ptr3;
	*ptr3=*ptr1;
	*ptr1=tmp;
		
}
/* int temp =*ptr3;
*ptr3=*ptr2;
*ptr2=*ptr1;
*ptr1=temp;
*/

int main(void)
{
	int num1, num2, num3;
	
	printf("input 3 integers to swap : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	printf("input : %d %d %d\n", num1, num2, num3);
	Swap3(&num1, &num2, &num3);
	printf("output : %d %d %d\n", num1, num2, num3);
	
	return 0;
}