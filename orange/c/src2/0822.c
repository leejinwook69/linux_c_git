#include <stdio.h>

int main(void)
{
	int a, z;
	
	printf("  A Z\n+ Z A\n------\n");
	
	for(a=0; a<10; a++)
	{
		
		for(z=0; z<10; z++)
		{
			if(11*a+11*z==99)
			{
				printf("A = %d, Z = %d\n", a, z);
			break;
			}
			
		}
	}
	return 0;
}