#include <stdio.h>
#include <stdlib.h>

// Write a program that asks the user for a number and prints whether it is positive, negative, or zero.

int main(void)
{

    float num;

    printf("enter a number : ");
    scanf("%f", &num);

    if (num > 0)
    {
        printf("The number %.2f is Positive", num);
    }
    else if (num == 0)
    {
        printf("The number entered (%.0f) is zero", num);
    }
    else
    {
        printf("The number %0.2f is Negative", num);
    }

    return 0;
}