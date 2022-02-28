#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cyc = 5;
	int count = 0;
	int * arr = (int*)malloc(sizeof(int)*cyc);

	while(1)
	{
		printf("input an integer, -1 to quit : ");
		scanf("%d", &arr[count]);

		printf("%d \n", arr[count]);
		
		if(arr[count++] == -1)
			break;

		if(count == cyc-1)
		{
			cyc += 3;
			arr = realloc(arr, sizeof(int)*cyc);
		}
	}
	for(int i = 0; i < count; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

