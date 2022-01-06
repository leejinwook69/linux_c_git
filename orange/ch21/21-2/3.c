#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char name1[20];
	char age1[5];
	char name2[20];
	char age2[5];

	char ch;
	int count = 0;

	fputs("input1 : ", stdout);
	//첫 케이스 이름 입력 받기
	while((ch = getchar()) != ' ')
		name1[count++] = ch;
	
	if(count >= 20)
		count = 19;

	name1[count] = 0;
	count = 0;
	//첫 케이스 나이 입력 받기
	while((ch = getchar()) != '\n')
		age1[count++] = ch;
	if(count >= 5)
		count = 4;
	age1[count] = 0;
	count = 0;

	fputs("input2 : ", stdout);
	//두번째 케이스 이름 입력 받기
	while((ch = getchar()) != ' ')
		name2[count++] = ch;
	
	if(count >= 20)
		count = 19;

	name2[count] = 0;
	count = 0;
	//두번째 케이스 나이 입력 받기
	while((ch = getchar()) != '\n')
		age2[count++] = ch;
	if(count >= 5)
		count = 4;
	age2[count] = 0;

	//compare 1&2
	if(strcmp(name1, name2) == 0)
	{
		fputs("name : matched ", stdout);
	}else
	{
		fputs("name : unmatched ", stdout);
	}

	if(atoi(age1) == atoi(age2))
	{
		fputs("age : matched\n", stdout);
	}else
	{
		fputs("age : unmatched\n", stdout);
	}

	return 0;
}
