#include <stdio.h>

void hui(char arr[], int len)
{
	int n = 0;
	len -= 1;
	
	for(n; n != len; n++)
	{
		if(arr[n] == arr[len-n])
			;
		else
		{
			
			printf("회문이 아닙니다.\n");
			return;
		}
		
	}
	printf("회문입니다.\n");
	return;
}

int main (void)
{
	char arr[50];
	int len = 0;
	
	printf("입력 : ");
	scanf("%s", arr);
	
	for (len; arr[len] != 0; len++ );
	printf("글자수 : %d\n", len);
	hui(arr, len);
	
	return 0;
	
}