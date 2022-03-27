#include <stdio.h>
#include <math.h>
#define MAX 250000

// arr space <= 2*n
_Bool arr[MAX];

int main(void)
{
    int n, count;

    // exclude 0, 1
    arr[0] = 1;
    arr[1] = 1;

    // get prime numbers in MAX, using Sieve of Eratostenes
    for (int div = 2; div < MAX; div++)
    {
        if (arr[div] == 1)
        {
            continue;
        }
        else
        {
            for (int piv = 2; div * piv <= MAX; piv++)
            {
                arr[div * piv] = 1;
            }
        }
    }

    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }

        count = 0;
        // min = n+1, for the case when n is prime number
        for (int min = n + 1; min <= 2 * n; min++)
        {
            if (!arr[min])
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
}