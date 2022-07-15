#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int age = get_int("what's your age?\n");
    printf("your are at least %i days old.\n", age * 365);
}
