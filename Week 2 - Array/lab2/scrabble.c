// Determine higher scrable score from 2 input

#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Promt both player for input
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");


    // Compute score
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Print The Winner
    if (score1 > score2)
    {
        printf("Player 1 Wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 Wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    int score = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        // Uppercase
        if ((int) word[i] <= 90 && (int) word[i] >= 65)
        {
            int num = (int) word[i] - 65 ;
            score += POINTS[num];
        }

        // Lowecase
        else if ((int) word[i] <= 122 && (int) word[i] >= 97)
        {
            int num = (int) word[i] - 97 ;
            score += POINTS[num];
        }
    }
    return score;
}