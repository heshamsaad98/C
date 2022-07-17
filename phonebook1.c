#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[4];
    
    people[0].name = "HESHAM";
    people[0]. number = "01150554313";
    
    people[1].name = "MAHMOUD";
    people[1].number = "01150554314";
    
    people[2].name = "MOHAMED";
    people[2].number = "01150554315";
    
    people[3].name = "ALI";
    people[3].number = "01150554316";
    
    for (int i = 0; i < 4; i++)
    {
        if (strcmp(people[i].name, "HESHAM") == 0)
        {
            printf("%s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
