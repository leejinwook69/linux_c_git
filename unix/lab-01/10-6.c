#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n;
    extern char *optarg;
    extern int optind;

    long r;

    //getopt 를 이용해 -a 혹은 -m을 옵션으로 받으며 해당 옵션들은 별도의 파라미터를 가질 수 있게 만든다
    while ((n = getopt(argc, argv, "a:m:")) != -1)
    {
        switch (n) {
            //-a 옵션의 경우
            case 'a':
                r = 0;
                //파라미터들을 롱으로 변환하여 전부 더한다
                for (--optind; optind < argc; optind++)
                    r = r+ atol(argv[optind]);
                break;
            //-m 옵션의 경우
            case 'm':
                r = 1;
                //파라미터들을 롱으로 변환하여 전부 곱한다
                for (--optind; optind < argc; optind++)
                    r = r * atol(argv[optind]);
                break;
                
    
        }
        //수행 결과를 출력한다
        printf("res = %ld\n", r);
    }
    return 0;
}
