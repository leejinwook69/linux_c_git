#include <stdio.h>

int main(void)
{
	int total=0, i=0;
	int num, input;
	
	printf("입력할 정수의 수는 ? ");
	scanf("%d", &num);
	
	while(i++<num)
	{
		printf("정수 입력 : ");
		scanf("%d", &input);
		total+=input;
	}
	printf("average : %f\n", (double)total/num); //명시적 형 변환 대신 앞에서 변수 선언 시 double형으로 선언하는것으로 대체 가능.
	return 0;
	
}