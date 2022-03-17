#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int size;
	char * str;

	printf("input string size : ");
	scanf("%d", &size);
	size++;

	str = (char*)malloc(sizeof(char)*size);

	printf("input string : ");
	getchar();
	str[size-1] = '\0';
	size--;

	for(; size != 0; size--)
	{
		str[size-1] = getchar();
		printf("str %d = %c\n", size-1, str[size-1]);
	}
	printf("output string is \" %s \"\n", str);

	return 0;
}
