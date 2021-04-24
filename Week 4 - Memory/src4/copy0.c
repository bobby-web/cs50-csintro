// Capitalizes a string

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get two string
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // Print Strings
    printf("%s\n", s);
    printf("%s\n", t);
}
