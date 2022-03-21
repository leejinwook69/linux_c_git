#include <stdio.h>

int main(void)
{
    int hour;
    int min;
    int input;


    scanf("%d %d", &hour, &min);
    scanf("%d", &input);
    
    //1. add min and input.
    //2. if min >= 60, repeat : hour++ and min -60
    //3. if hour >= 24, repeat : hour - 24
    
    min += input;
    
    while(min >= 60)
    {
        min-=60;
        if(++hour>=24)
        {
            hour -= 24;
        }
    }

    printf("%d %d\n", hour, min);
    return 0;
}
