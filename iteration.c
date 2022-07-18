#include <cs50.h>
#include <stdio.h>

void drwa(int h);

int main(void)
{
    int height = get_int("Height: ");
    
    drwa(height);
}

void drwa(int h)
{
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
