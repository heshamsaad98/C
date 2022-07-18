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
    if (h == 0)
    {
        return;
    }
    
    drwa(h - 1);
    
    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}
