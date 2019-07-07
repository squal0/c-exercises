//program allows a user to enter a string and a char o be searched for
#include <stdio.h>
#include <string.h>

void main()
{
    char a, str[81], *ptr;
    printf("\nEnter a sequence:\n");
    gets(str);
    printf("\nEnter a character to search for: ");
    a = getchar();
    ptr = strchr(str, a); //return pointer to char
    printf("\nString starts at address: %u", str);
    printf("\nFirst occurrence of the character is at address: %u", ptr);
    printf("\nPosition of the first occurrence (starting from 0) is: %d ", ptr);
}
