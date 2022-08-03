#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = malloc(5);

    printf("x: ");
    scanf("%s", s);

    printf("s %s\n", s);
}
