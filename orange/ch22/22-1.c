#include <stdio.h>

struct employee {
	char name[20];
	char phone[20];
	int pay;
};

int main(void)
{
	struct employee employee;
	
	printf("name : ");
	scanf("%s", employee.name);
	printf("phone : ");
	scanf("%s", employee.phone);
	printf("pay : ");
	scanf("%d", &employee.pay);
	
	printf("name : %s / phone : %s / pay : %d\n", employee.name, employee.phone, employee.pay);

	return 0;
}
