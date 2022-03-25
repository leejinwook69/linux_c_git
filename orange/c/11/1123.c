#include <stdio.h>

int main(void)
{
	char arr[100];
	int n, bignum=0;
	
	printf("input a string : ");
	scanf("%s", arr);
	
	for(n=0; arr[n]!= '\0'; n++)
	{
		if(arr[n]>=bignum)
			bignum=arr[n];
	}
	
	printf("biggset ascii code : %c\n", bignum);
	return 0;
}