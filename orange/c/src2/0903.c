#include <stdio.h>


int main(void)
{
	int kp1=1, km1=0, t=0, n=0;
	
	printf("how many factors ? : ");
	scanf("%d", &n);
		
	for(t=0; t<n; t++)
	{
		printf("%d ", km1);
		km1 = kp1-km1;		// 새로운 km1 = kp1과 km1의 중간항.
		kp1 += km1;			// 새로운 kp1 = 새로운 km1(중간항) + 중간항 다음항 , 즉 연속된 두 숫자의 합.
	}
	
	return 0;
}