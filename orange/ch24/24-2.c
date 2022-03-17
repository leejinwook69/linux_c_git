#include <stdio.h>

int FileSize(FILE * fp)
{
	int pivot;
	int size = 0;
	char c;

	pivot = ftell(fp);

	fseek(fp, 0, SEEK_SET);

	while((c = fgetc(fp)) != EOF) 
	{
		size++;
	}
	
	
	
	fseek(fp, pivot, SEEK_SET);

	return size;
}

int main(void)
{
	FILE * file = fopen("size.txt", "rt");
	
	fseek(file, 2, SEEK_SET);
	
	printf("ftell = %d\n", ftell(file));
	printf("FileSize = %d bytes\n", FileSize(file)); 
	printf("ftell = %d\n", ftell(file));
	
	fclose(file);

	return 0;
}
