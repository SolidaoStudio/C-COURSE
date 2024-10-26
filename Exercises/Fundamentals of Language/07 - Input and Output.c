#include <stdio.h>
#include <stdlib.h>

// Create a program that reads a user's name and age and prints them in a sentence, such as: “Hello, John, you are 25 years old!”

int main()
{
    char name[50];
    int age;

    printf("insert your name : ");
    scanf("%s", name);
    printf("insert your Age");
    scanf("%d", age);

    printf("Hello, %s, you are %d years old", name, age);

    return 0;
}