// Implement Linear Search for Numbers

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // An Array of numbers
    int number[] = {4, 6, 8, 2, 7, 5, 0};

    // Search for 0
    for (int i = 0; i < 7; i++)
    {
        if (number[i] == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
