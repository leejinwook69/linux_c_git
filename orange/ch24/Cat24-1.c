#include <stdio.h>

int main(void)
{
	FILE * fp = fopen("data.txt", "rt");
	
	char line[100];
		
	if(fp == NULL)
	{
		puts("failed to open file");
		return -1;
	}

	while(fgets(line, sizeof(line), fp) != 0)
	{
//		puts(line);
		printf(line);
	}

	fclose(fp);

	return 0;
}
