// Prints an Integer via its  address

#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%i\n", *&n);
}

// Output: 50