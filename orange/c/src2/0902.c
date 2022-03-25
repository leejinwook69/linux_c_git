#include <stdio.h>

double CelToFah(double cel)
{
	double fah;
	fah = 1.8*cel+32;
	
	printf("%fยบC = %fยบF\n", cel, fah);
	
	return 0;								//위에부분 없이 return cel*1.8+32; 만으로 구현 가능.
}

double FahToCel(double fah)
{
	double cel;
	cel = (fah-32)/1.8;
	
	printf("%fยบF = %fยบC\n", fah, cel);
	
	return 0;								//위에부분 없이 return (fah-32)/1.8; 만으로 구현 가능.
}

int main(void)
{
	int or;
	double cel, fah;
	printf("choose : 1. Cel to Fah 2. Fah to Cel : ");
	scanf("%d", &or);
	
	if(or == 1)
	{
		printf("input Cel : ");
		scanf("%lf", &cel);
		CelToFah(cel);
	}else if(or == 2)
	{
		printf("input Fah : ");
		scanf("%lf", &fah);
		FahToCel(fah);
	}else{
		printf("wrong input value \n");
	}
	
	return 0;
}