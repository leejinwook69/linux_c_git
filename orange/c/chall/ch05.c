#include <stdio.h>

int pnum(int num)
{
	int h=num-1;
	
	while(h>1)
	{
		if(num%h==0)
			return 0;
		h--;
	}
	printf("%d ", num);
	return 1;
}

int main(void)
{
	int num=2, h=1;
	
	for(; h<=10;)
	{
		switch(pnum(num)){
			case 1:
				h++;
				num++;
				break;
			default:
				num++;
				break;
				
		}
				
	}
}