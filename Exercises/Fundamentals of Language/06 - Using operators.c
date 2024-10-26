#include <stdio.h>
#include <stdlib.h>

// Create a program that asks the user for two numbers, adds them, subtracts them, multiplies them, and divides them, printing the results.

int main()
{

    float num1, num2;
    float add, sub, mul, div;

    printf("insert two numbers : \n");
    scanf("%f %f", &num1, &num2);

    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("\nCalculator \naddition = %.2f \nsubtraction = %.2f \nmultiplication = %.2f \ndivision = %.2f", add, sub, mul, div);

    return 0;
}