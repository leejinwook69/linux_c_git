#include <stdio.h>

void anum (int arr[], int len)
{
	int num = 0;
	printf("홀수 출력 : ");
	for(num; num!=len ; num++)
		if(arr[num] % 2 == 1)
			printf("%d ", arr[num]);
	
	printf("\n");
	return;
}

void bnum (int arr[], int len)
{
	int num = 0;
	printf("짝수 출력 : ");
	for(num; num!=len ; num++)
		if(arr[num] % 2 == 0)
			printf("%d ", arr[num]);
	
	printf("\n");
	return;
}

int main (void)
{
	int arr[10];
	int num = 0;
	printf("10개의 정수 입력 : ");
	
	for(num; num != 10 ; num++)
		scanf("%d", &arr[num]);
	
	anum(arr, 10);
	bnum(arr, 10);
	
	return 0;
}