#include <stdio.h>

void MaxAndMin(int ** max, int ** min, int arr[], int len)
{
	int n = 0;
	
	
	for(n; n != len; n++)
	{
		if(**max < arr[n])
			*max = &arr[n];
		if(**min > arr[n])
			*min = &arr[n];
	}
	
	return;
}




int main(void)
{
	int * maxPtr;
	int * minPtr;
	int arr[5];
	int n = 0;
	//arr배열 입력
	
	
	for(n; n != 5; n++)
	{
		printf("input arr[%d] : ", n);
		scanf("%d", &arr[n]);
	}
	n = 0;
	for(n; n != 5; n++)
		printf("%5d", arr[n]);
	
	maxPtr = arr;
	minPtr = arr;

	MaxAndMin(&maxPtr, &minPtr, arr, 5);
	//maxPtr은 배열의 최대값의 주소값, minPtr은 그 반대를 가르켜야함.
	printf("\nMaxnum, Maxnum(p) : %d, %p", *maxPtr, maxPtr);
	printf("\nMinnum, Minnum(p) : %d, %p\n", *minPtr, minPtr);
	
	return 0;
}