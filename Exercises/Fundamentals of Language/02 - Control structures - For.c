#include <stdio.h>
#include <stdlib.h>

// Create a program that prints the numbers from 1 to 100 using a `for` loop.

int main()
{

    int num;
    for (num = 1; num < 100; num++)
    {
        printf("%d, ", num);
    }
    printf("%d.", num);

    return 0;
}