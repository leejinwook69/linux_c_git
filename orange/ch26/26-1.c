#include <stdio.h>
#define ADD(A, B, C)	((A)+(B)+(C))
#define MUL(A, B, C)	((A)*(B)*(C))

int main(void)
{
	printf("ADD : %d\n", ADD(2, 4, 6));
	printf("MUL : %d\n", MUL(2, 4, 6));

	return 0;
}
