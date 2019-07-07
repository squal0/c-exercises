//program uses a for loop to get the factorial of a number
#include <stdio.h>
int main()
{
    int c,i,fact=1;
    printf("Enter a number to calculate it's factorial\n");
    scanf("%d", &i);
    for(c = 1; c <= i; c++){
        fact = fact * c;
    printf("Factorial of %d = %d\n", i,fact);
    }
    return(0);
}
