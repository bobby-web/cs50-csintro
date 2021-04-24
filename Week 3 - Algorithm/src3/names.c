// Implement Linear Serch For Name

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // An Array of names
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    // Search for Ron
    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], "ROn") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}


