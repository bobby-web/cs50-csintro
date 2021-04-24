// Averages three numbers using an array

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Scores
    int scores[3];
    scores[0] = get_int("Score: ");
    scores[1] = get_int("Score: ");
    scores[2] = get_int("Score: ");

    // Print average
    printf("The Average Is: %F\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}