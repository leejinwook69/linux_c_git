#include <stdio.h>

int main(void)
{
    int arr[5];
    int sum = 0;
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    for(int i = 0; i < 5; i++)
    {
        sum += arr[i]*arr[i];
    }
    printf("%d\n", sum%10);

    return 0;
}