#include <stdio.h>

int main(void)
{
	char arrin[100];
	int max=0, n=0, i=0;

	printf("input a string : ");
	scanf("%s", arrin);
	
	for(; arrin[max] !='\0'; max++);
	
	printf("max : %d\n", max);
	while(max!=0)
	{
		i=0;
			while(i!=max)
			{
				if(i==0)
				{
					n=arrin[0];
				}else
				{
					arrin[i-1]=arrin[i];
				}
				
				i++;
			}
		arrin[max-1]=n;
		max--;
	}
	
	printf("%s\n", arrin);
	
	
	return 0;
}
