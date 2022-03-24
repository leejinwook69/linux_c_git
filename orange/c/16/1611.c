#include <stdio.h>

int main (void)
{
	int g = 0, s = 0;
	int arr[3][9] = {
		{2, 4, 6, 8, 10, 12, 14, 16, 18},
		{3, 6, 9, 12, 15, 18, 21, 24, 27},
		{4, 8, 12, 16, 20, 24, 28, 32, 36}
	};
	
	for(s; s != 3; s++)
	{
		for(g; g != 9; g++)
		{
			printf("%3d ", arr[s][g]);
		}
		printf("\n");
		g = 0;
	}
	
	return 0;
}