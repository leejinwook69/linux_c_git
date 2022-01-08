#include <stdio.h>

struct employee {
	char name[20];
	char phone[20];
	int pay;
};

int main(void)
{
	struct employee arr[3];
	printf("employee1 : ");
	scanf("%s %s %d", arr[0].name, arr[0].phone, &arr[0].pay);
	printf("employee2 : ");
	scanf("%s %s %d", arr[1].name, arr[1].phone, &arr[1].pay);
	printf("employee3 : ");
	scanf("%s %s %d", arr[2].name, arr[2].phone, &arr[2].pay);
	
	printf("employee1 / name : %s / phone : %s / pay : %d\n", arr[0].name, arr[0].phone, arr[0].pay);
	printf("employee2 / name : %s / phone : %s / pay : %d\n", arr[1].name, arr[1].phone, arr[1].pay);
	printf("employee3 / name : %s / phone : %s / pay : %d\n", arr[2].name, arr[2].phone, arr[2].pay);

	return 0;
}
