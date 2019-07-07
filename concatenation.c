#include <stdio.h>
#include <string.h>

void main()
{
    char firstName[15];
    char secondName[15];
    printf("Enter your first name:\n");
    scanf("%s",firstName);
    printf("Enter your second name:\n");
    scanf("%s",secondName);
    strcat(firstName, secondName);
    printf(firstName);
}
