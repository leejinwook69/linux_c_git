#include <stdio.h>

int main(void)
{
    int ch = 0;
    ch = getchar();
    
    if(65 <= ch && ch <= 90)
    {
        ch += 32;
        putchar(ch);
    } else if(97 <= ch && ch <= 122)
    {
        ch -= 32;
        putchar(ch);
    }else
    {
        printf("unknown symbol\n");
    }

    return 0;
}
