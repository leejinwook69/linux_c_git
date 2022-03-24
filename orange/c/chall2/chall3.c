#include <stdio.h>

int main(void)
{
	int arr[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int len = 10;
	int p = 0;
	int n = 0;
	int n1 = 0;
	int n2 = 9;
	int k = 0;
	
	for (p; p != 10; )
	{
		
		printf("입력 %d : ", p+1);
		scanf("%d", &n);
		
		if(n %2 == 1)
		{
			arr[n1] = n;
			n1++;
			p++;
			
		}
		else
		{
			arr[n2] = n;
			n2--;
			p++;
		}
		for(k=0; k != 10; k++)
			printf("%d ", arr[k]);
		printf("\n");
	}
	
	
}