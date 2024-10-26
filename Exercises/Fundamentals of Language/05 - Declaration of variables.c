#include <stdio.h>
#include <stdlib.h>

// Declare three variables (integer, floating point and character), assign values ​​and print the results.

int main()
{
    int nInt;
    float nFloat;
    char nChar[10];

    printf("enter an int, a float and a word with up to 10 characters :\n");
    scanf("%d %f %s", &nInt, &nFloat, nChar);
    printf("int = %d - float = %.2f - string = %s\n", nInt, nFloat, nChar);

    return 0;
}