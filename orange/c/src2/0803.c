#include <stdio.h>

int main(void)
{
	int kor, math, eng, average;
	
	printf("input score of 국어, 영어, 수학 : ");
	scanf("%d %d %d", &kor, &math, &eng);
	
	average=(kor+math+eng)/3;
	
	if(average>=90)
		printf("your grade : A\n");
	else if(average>=80)
		printf("your grade : B\n");
	else if(average>=70)
		printf("your grade : C\n");
	else if(average>=50)
		printf("your grade : D\n");
	else
		printf("your grade : F\n");
	
	return 0;
}

//average 는 double로 나눗셈연산 원활히 만드는 편이 좋다.