#include <stdio.h>

int main(void)
{
	char arr[100];
	char num[100];
	int count = 0;
	int sum = 0;

	fputs("input string : ", stdout);
	fgets(arr, sizeof(arr), stdin);
	
	for(int i = 0; arr[i] != 10 ; i++)
	{
		if(arr[i] >= 48 && arr[i] <= 57)
		{
			num[count] = arr[i]-48;
			count++;
		}
	}

	num[count] = -1;

	for(int i = 0; num[i] != -1; i++)
	{
		sum += num[i];
	}

	printf("%d\n", sum);

	return 0;
}
