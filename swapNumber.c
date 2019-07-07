//program that swaps numbers
#include <stdio.h>

void swapNumbers(int *num1, int *num2);
void main()
{
    int i,j;
    i = 5;
    j = 7;
    printf("Before the function call the value of i is %d and the value of j is %d\n", i,j);
    swapNumbers(&i, &j);
    printf("After the function call the value of i is %d and the value of j is %d\n", i,j);
}
void swapNumbers(int *num1, int *num2)
{
    int tempStorage;
    tempStorage = *num1;
    *num1 = *num2;
    *num2 = tempStorage;
}
