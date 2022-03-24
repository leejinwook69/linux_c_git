#include <stdio.h>

int main (void)
{
	int arr[50];
	int num=0;
	int n=0;
	
	printf("10진수 정수 입력 : ");
	scanf("%d", &num);
	
	for (num; ;)
	{
		if (num == 1)
		{
			arr[n] = 1;
			printf("process1 \n");
			break;
		}
		else if (num == 0)
		{
			arr[n] = 0;
			printf("process2 \n");
			break;
		}
		else if (num % 2 == 1)
		{
			arr[n] = 1;
			n++;
			printf("process3 \n");
			num /= 2;
		}
		else
		{
			arr[n] = 0;
			n++;
			printf("process4 \n");
			num /= 2;
		}
		
	}
	
	for(n; n!= -1; n--)
		printf("%d", arr[n]);
	
	printf("\n");
	return 0;
}