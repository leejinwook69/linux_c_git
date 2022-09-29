#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *str;

    //malloc 을 이용해 str 에 char 20개분 크기의 공간을 할당한다
//    str = malloc(sizeof(char) * 20);

    //해당 str에 문자열 Hello를 strcpy로 입력한 뒤 출력한다
    strcpy(str, "Hello");
    printf("%s\n", str);

    //다시 해당 str에 이번엔 문자열 Good morning 을 입력 후 출력한다
    strcpy(str, "Good morning");
    printf("%s\n", str);

    //할당한 str을 회수한다
    free(str);
    return 0;
}
