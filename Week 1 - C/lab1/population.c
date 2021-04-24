#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int start_size, end_size;
    // Get Starting Size
    do
    {
        start_size = get_int("Start Size: ");
    }
    while (start_size < 9);

    // Get Ending Size
    do
    {
        end_size = get_int("End Size: ");
    }
    while (end_size < start_size);

    // Calculate Year
    int n = start_size;
    int i = 0;
    if (end_size==start_size)
    {
        //printf ("%i",i);
    }
    else
    {
        do
        {
            n = n + (n / 3) - (n / 4);
            i++;
        }
        while (n < end_size);
    }
    // Print Result
    printf("Years: %i\n", i);

}