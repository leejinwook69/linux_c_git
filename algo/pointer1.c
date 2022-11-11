#include <stdio.h>
#include <string.h>

int main(void)
{
    char array_name[8] = {0};
    char *point_name = array_name;

    sprintf(point_name, "%s", "Game");

    printf("%c %c %c\n", *point_name, *(point_name+1), *(point_name+2));
    printf("%c %c %c\n", array_name[0], array_name[1], array_name[2]);
    printf("%p, %p", array_name, point_name);
}
