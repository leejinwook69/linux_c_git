#include <stdio.h>
#include <stdlib.h>

//commandline arguments를 입력받을 수 있다
int main(int argc, char *argv[])
{
    int i, sum = 0;

    //입력받은 arguments의 갯수만큼 반복해서 수행한다
    for(i = 1; i < argc; i++)
        //입력받은 원소를 int형으로 변환하여 차례로 sum 변수에 합한다
        sum += atoi(argv[i]);

    //결과는 arguments들의 총 합이 나오게 된다
    printf("%d\n", sum);
    return 0;
}
