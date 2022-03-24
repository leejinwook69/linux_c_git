#include <stdio.h>

int max(int n1,int n2,int n3)
{
	if(n1 > n2)
		return n1 > n3 ? n1 : n3;
	else
		return n2 > n3 ? n2 : n3;
}

int min(int n1,int n2,int n3)
{
	if(n1 < n2)
		return n1 < n3 ? n1 : n3;
	else
		return n2 < n3 ? n2 : n3;
}

int main(void)
{
	int n1, n2, n3;
	printf("input 3 integers : ");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	printf("bignum : %d, smallnum : %d\n", max(n1, n2, n3), min(n1, n2, n3));
	return 0;
}