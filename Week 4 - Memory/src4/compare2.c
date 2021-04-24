// Compares two string using strcmp

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get two string
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // Compare string
    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}

/*
Test case

Case 1
input:
as
sa
Output:
Different

Case 2
input:
as
as
Output:
Different

Its Different Because its actually compare address of diffferent string