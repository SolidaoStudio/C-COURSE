#include <stdio.h>
#include <stdlib.h>

// Create a program that prints the numbers from 1 to 100 using a `While` loop.

int main()
{

    int num = 1;
    while (num < 100)
    {
        printf("%d, ", num);
        num++;
    }
    printf("%d.", num);

    return 0;
}