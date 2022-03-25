#include <stdio.h>

int main(void)
{
	int arr1[5];
	int big, small, total;
	
	
	printf("input 5 integers : ");
	scanf("%d %d %d %d %d", &arr1[0], &arr1[1], &arr1[2], &arr1[3], &arr1[4]);
	//input can be executed by arrow rule
	big=arr1[0];
	small=arr1[0];
	
	for(int i=0; i<=4; i++) // input, int i
	{
		if(arr1[i]>arr1[i-1])//<>big<arr1[i]
			big=arr1[i];
		
		if(arr1[i]<arr1[i-1])//<>small>arr1[i]
			small=arr1[i];
		
		total+=arr1[i];
	}
	printf("biggest : %d\n", big);
	printf("smallest : %d\n", small);
	printf("total : %d\n", total);
	
	return 0;
}