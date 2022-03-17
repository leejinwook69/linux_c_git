#include <stdio.h>
#define PI (3.14)
#define AREA(R) ((PI)*(R)*(R))

int main(void)
{
	printf("AREA : %G\n", AREA(5));

	return 0;
}
