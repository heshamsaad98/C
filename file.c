#include <stdio.h>
#include <cs50.h>

int main(void)
{
    FILE *myfile = fopen("phonebook.csv", "a");

    string name = get_string("name: ");
    string phone = get_string("phone: ");

    fprintf(myfile, "%s, %s\n", name, phone);

    fclose(myfile);
}
