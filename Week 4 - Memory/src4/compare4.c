// Prints two strings

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get two string
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // Print Strings
    printf("%p\n", s);
    printf("%p\n", t);
}
