#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[4] = {"HESHAM", "MAHMOUD", "MOHAMED", "ALI"};
    string numbers[4] = {"01150554313", "01150554314", "01150554315", "01150554316"};
    
    for (int i = 0; i < 4; i++)
    {
        if (strcmp(names[i], "HESHAM") == 0)
        {
            printf("%s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
