#include <stdio.h>

void asc(int arr[], int len)
{
	int a = 0;
	int tmp = 0;
	
	for(len; len != 1 ; len--)
	{
		for(a; a != len-1; a++)
		{
			if(arr[a] > arr[a+1])
			{
				tmp = arr[a+1];
				arr[a+1] = arr[a];
				arr[a] = tmp;
			}
		}
		a = 0;
	}
}

void dec(int arr[], int len)
{
	int a = 0;
	int tmp = 0;
	
	for(len; len != 1 ; len--)
	{
		for(a; a != len-1; a++)
		{
			if(arr[a] < arr[a+1])
			{
				tmp = arr[a+1];
				arr[a+1] = arr[a];
				arr[a] = tmp;
			}
		}
		a = 0;
	}
}


int main(void)
{
	int arr[7];
	int len = 7;
	int n = 0;
	
	printf("input 7 num : ");
	
	for(n; n != 7; n++)
		scanf("%d", &arr[n]);
	
	dec(arr, 7);
	
	n = 0;
	for(n; n != 7; n++)
		printf("%d ", arr[n]);
	
	return 0;
}