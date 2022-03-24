#include <stdio.h>

void pur(int num)
{
	int sh=1, cr=1, co=1, k=0;
	
	
	
		while(700*sh+500*cr+400*co<=num)//sh값
		{
			while(700*sh+500*cr+400*co<=num)//cr값
			{
				while(700*sh+500*cr+400*co<=num)//co 값
				{
					if(700*sh+500*cr+400*co==num)
					{
						printf("새우깡 : %d개, 크림빵 %d개, 콜라 %d개 \n", sh, cr, co);
						k++;
					}
					co++;
				}
				cr++;
				co=1;
			}
			sh++;
			co=1;
			cr=1;
		}
			
	
}


int main(void)
{
	int num;
	
	printf("소유액 : ");
	scanf("%d", &num);
	
	pur(num);
}