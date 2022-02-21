#include <stdio.h>

int main(void)
{
	FILE * data = fopen("data.txt", "wt");
	
	if(data == NULL)
	{
		puts("Failed to open file");
	}

	fputs("#name : ljw\n", data);
	fputs("#id num : 000000-0000000\n", data);
	fputs("#tel num : 000-0000-0000\n", data);

	fclose(data);
	return 0;
}
