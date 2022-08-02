#include <stdio.h>

int main(void)
{
    int num[] = {4, 5, 6, 7};

    printf("%i\n", *num);
    printf("%i\n", *(num+1));
    printf("%i\n", *(num+2));
    printf("%i\n", *(num+3));
}
