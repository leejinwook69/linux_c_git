#include <stdio.h>

int main(void)
{
    int n, i;
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
            n = n/i;
            i = 1;
        }
    }

    return 0;
}