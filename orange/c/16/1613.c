#include <stdio.h>

int main(void)
{
	int arr[5][5];
	int s = 0;
	int g = 0;
	int i = 0;
	
	arr[4][4] = 0;
	
	printf("철희의 국어, 영어, 수학, 국사 성적 입력 : ");
	for(g; g != 4; g++)
	{
		scanf("%d", &arr[0][g]);
	}
	
	g = 0;
	
	printf("철수의 국어, 영어, 수학, 국사 성적 입력 : ");
	for(g; g != 4; g++)
	{
		scanf("%d", &arr[1][g]);
	}
	
	g = 0;
	
	printf("영희의 국어, 영어, 수학, 국사 성적 입력 : ");
	for(g; g != 4; g++)
	{
		scanf("%d", &arr[2][g]);
	}
	
	g = 0;
	
	printf("영수의 국어, 영어, 수학, 국사 성적 입력 : ");
	for(g; g != 4; g++)
	{
		scanf("%d", &arr[3][g]);
	}
	
	g = 0;
	
	for(i; i != 4; i++)
	{
		arr[i][4] = arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3];
		arr[4][i] = arr[0][i] + arr[1][i] + arr[2][i] + arr[3][i];
		arr[4][4] += arr[i][4];
	}

	for(s; s !=5; s++)
	{
		for(g; g !=5; g++)
		{
			printf("%3d ", arr[s][g]);
		}
		g = 0;
		printf("\n");
	}
	
	return 0;
}