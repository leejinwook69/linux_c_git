#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4;
	printf("input coordinates : x1 y1 \n");
scanf("%d %d", &num1, &num2);
	printf("input coordinates : x2 y2 \n");
scanf("%d %d", &num3, &num4);
	printf("output : %d\n", (num3-num1)*(num4-num2));
	return 0;
}