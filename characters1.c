#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string names[4];
    names[0] = "HESHAM";
    names[1] = "SAAD";
    names[2] = "MOHAMED";
    names[3] = "HYBA";
    
    printf("%s\n", names[0]);
    printf("%c%c%c%c%c%c%i\n", names[0][0], names[0][1], names[0][2], names[0][3], names[0][4], names[0][5], names[0][6]);
}
