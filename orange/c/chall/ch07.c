#include <stdio.h>

double zg(int k)
{
	double a=1;
	
	if(k>0)
	{
		a=2*zg(k-1);
	}else if(k<0)
	{
		a=0.5*zg(k+1);
	}else
		return a;
}

int main(void)
{
	double num; int k=0;
	printf("input a integer : ");
	scanf("%lf", &num);
	
	if(num<1)
	{
		k=-1;
		for(; zg(k)>=num; k--);
		k+=1;							//in line 25, zg(k) goes below num
	}else
	{
		for(; zg(k)<=num; k++);
		k-=1;							//in line 29, zg(k) goes above num
	}
	printf("k = %d\n", k);
	
	return 0;
	
}
