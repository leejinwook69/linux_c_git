#include <stdio.h>

int main(void)
{
	int s = 0, g = 0;
	
	int A[2][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8}
	};
	int B[4][2];
	
	for(s; s != 4; s++)
	{
		for(g; g != 2; g++)
		{
			B[s][g] = A[g][s];
			printf("%3d ", B[s][g]);
		}
		g=0;
		printf("\n");
	}
	
	return 0;
}