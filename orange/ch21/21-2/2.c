#include <stdio.h>

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[40];

	int num1 = 0;
	int num2 = 0;

	fputs("input str1 : ", stdout);
	fgets(str1, sizeof(str1), stdin);

	fputs("input str2 : ", stdout);
	fgets(str2, sizeof(str2), stdin);

	for(int i = 0; i < 20; i++)
	{
		if(str1[i] == '\n')
			num1 = i-1;
		if(str2[i] == '\n')
			num2 = i-1;
	}

	for(int i = 0; i < 20; i++)
	{
		if(i <= num1)
			str3[i] = str1[i];
		if(i <= num2)
		str3[i+num1+1] = str2[i]; else str3[i+num1+1] = 0;
	}
	
	fputs(str3, stdout);
	return 0;
}
