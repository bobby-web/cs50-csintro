// Implement a phone book with structs

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
    person people[2];

    people[0].name = "Brian";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-949-468-2750";

    // Search for David
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[1].name, "David") == 0) // strcmp is fucntion in string.h to compare 2 string
        {
            printf("Found %s\n", people[1].number);
            return 0;
        }
    }
    printf("not Found\n");
    return 1;
}
