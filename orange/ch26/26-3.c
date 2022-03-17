#include <stdio.h>
#define MAX(A, B) ((A) >= (B) ? (A) : (B))

int main(void)
{
	printf("MAX : %d", MAX(5, 10));

	return 0;
}
