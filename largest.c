//determines the largest number from the input of a user
#include <stdio.h>
void main()
{
    int num1,num2,num3,biggest;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &num1,&num2,&num3);
    biggest = num1;
    if(num2 > biggest)
    {
        biggest = num2;
    }
    if(num3 > biggest)
    {
        biggest = num3;
    }
    printf("Between %d %d and %d, %d is the largest\n", num1,num2,num3,biggest);
}
