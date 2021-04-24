// Averages three (hardcoded) numbers using an array

#include <stdio.h>

int main(void)
{
    // Scores
    int scores[3];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    // Print average
    printf("The Average Is: %F\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}