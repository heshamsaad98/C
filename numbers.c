#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // An array of numbers
    int numbers[] = {41, 13, 15, 25, 30, 10};
    
    // Search for 50
    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] == 50)
        {
            printf("Found\n");
            return 0;
        }
        else
        {
            printf("Not found\n");
            return 1;
        }
    }
}
