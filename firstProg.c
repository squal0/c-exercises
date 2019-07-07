#include <stdio.h>
void main()
{
    int num1, num2;
    char symbol;
    float result;
    printf("Please enter the first number to do calculations on:\n");
    scanf("%d", &num1);
    printf("Please enter the second number to do calculations on:\n");
    scanf("%d", &num2);

        result = num1 + num2;
        printf("The sum of %d and %d is %f", num1,num2,result);

        result = num1 - num2;
        printf("\nThe subtraction of %d and %d is %f", num1,num2,result);

        result = num1 * num2;
        printf("\nThe multiplication of %d and %d is %f", num1,num2,result);

        result = num1 / num2;
        printf("\nThe division of %d and %d is %f", num1,num2,result);

}
