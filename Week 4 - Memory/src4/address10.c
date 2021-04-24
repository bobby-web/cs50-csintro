// Stores and prints a string's address via pointer arithmetic

#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%i\n", *(s+3));
    printf("%i\n", *(s+5));
    printf("%i\n", *(s+100000));
}

/*
Output:
H
I
!
0
99
Segmentation fault
*/