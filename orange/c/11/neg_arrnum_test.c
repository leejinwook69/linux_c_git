#include <stdio.h>

int main(void)
{
	char arrin[3]={'a', 'b', 'c'};
	
	arrin[-1]=arrin[0];
	
	printf("%c\n", arrin[-1]);
	
	return 0;
}