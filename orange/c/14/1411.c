#include <stdio.h>

int SqureByValue(int num)
{
	num=num*num;
	
	return num;
}

int SqureByReference(int *ptr)
{
	*ptr=*ptr**ptr;
	
	return *ptr;
}

int main(void)
{
	int num,call;
	
	printf("1. CallByValue 2. Call By Reference : ");
	scanf("%d", &call);
	
	if(call==1)
	{
		printf("input a integer : ");
		scanf("%d", &num);
		printf("squre : %d\n", SqureByValue(num));
		printf("num : %d\n", num);
	}else if(call==2)
	{
		printf("input a integer : ");
		scanf("%d", &num);
		printf("squre : %d\n", SqureByReference(&num));
		printf("num : %d\n", num);
	}else
	{
		printf("error : invalid number. \n");
	}
	
	return 0;
}