//program that assigns a student a grade depending on the marks obtained
#include <stdio.h>
#include <ctype.h>
void main()
{
    char grade;
    char userInput;
    printf("Please enter the grade\n");
    scanf("%c",&grade);
    userInput = toupper(grade);
    switch(grade)
    {
    case 'A':
        printf("Excellent");
        break;
    case 'B':
        printf("Very Good");
        break;
    case 'C':
        printf("Good");
        break;
    case 'D':
        printf("Fair");
        break;
    case 'E':
        printf("Please try again");
        break;
    default:
        printf("You have entered an invalid grade. \n");
        printf("Please enter a grade between \'A'\ - \'E'\.");
    }

}
