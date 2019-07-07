//program that finds the multiplication table of a given number
#include <stdio.h>

int main()
{
    int num, i = 1;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("Multiplication table of %d:\n", num);
    while(i <= 10)
    {
        printf("%d * %d = %d\n", num,i,num * i);
        i++;
    }
    return(0);
}
