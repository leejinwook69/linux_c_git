#include <stdio.h>

int main(void)
{
    int ch = 0;

    ch = getchar();
    putchar('&');
    putchar(ch);
    ch = getchar();
    putchar(ch);
    

    
    if(65 <= ch && ch <= 90)
    {
        ch += 32;
        for(int i = 0; i < 5; i++)
        {
            putchar(ch);    
        }
    }else if(97 <= ch && ch <= 122)
    {
        ch -= 32;
        for(int i = 0; i < 5; i++)
        {
            putchar(ch);    
        }
    }else
    {
        printf("unknown symbol\n");
    }

    return 0;
}
