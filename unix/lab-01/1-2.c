#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //access 함수는 해당 파일에 대한 권한을 체크하는 함수이다
    //따라서 F_OK, 즉 파일이 존재한다면 1,
    //존재하지 않는다면 -1을 반환한다
    if(access("linux.txt", F_OK) == -1) {
        //그리고 linux.txt 파일이 없어서 if문에 걸릴 경우,
        //perror로 해당 오류 메시지를 출력하고 프로세스를 종료한다.
        perror("linux.txt");
        exit(1);
    }
    return 0;
}
