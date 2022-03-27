#include <stdio.h>

int main(void) {
	int n1, n2, n3;
	int result = 0;

	scanf("%d %d %d", &n1, &n2, &n3);

	if(n1 == n2 && n2 == n3) {
		result = 10000 + 1000*n1;
//		printf("case1\n");
	} else if (n1 == n2 || n1 == n3) {
		result = 1000 + 100*n1;
//		printf("case2\n");
	} else if (n2 == n3) {
		result = 1000 + 100*n2;
//		printf("case3\n");
	} else {
		if (n2 >= n1) {
			n1 = n2;
//		printf("case4\n");
		}
		if (n3 >= n1) {
			n1 = n3;
//		printf("case5\n");
		}
		result = n1 * 100;
//		printf("case6\n");
	}

	printf("%d\n", result);
	
	return 0;
}
