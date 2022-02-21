#include <stdio.h>

int main(void)
{
	FILE * data = fopen("data.txt", "wt");
	
	if(data == NULL)
	{
		puts("Failed to open file");
		return -1;
	}

	fputs("#name : ljw\n", data);
	fputs("#id num : 000000-0000000\n", data);
	fputs("#tel num : 000-0000-0000\n", data);
	fputs("#favorite food : korean cuisine\n", data);
	fputs("#hobby : video games\n", data);


	fclose(data);
	return 0;
}
