#include <stdio.h>

int main(void)
{
	double num1, num2;
	printf("input two real numbers : \n");
	scanf("%lf %lf", &num1, &num2);
	printf("addition : %f \nsubtraction : %f \nmultiplication : %f \ndivision : %f\n", num1+num2, num1-num2, num1*num2, num1/num2);
	return 0;
}