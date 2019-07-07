#include <stdio.h>

void main()
{
    int num;
    for (num = 1; num <= 100; num++)
    if(num % 2 == 0)
    {
      printf("The even numbers from 1 to 1000 are %d:\n", num);
    }
    else
    {
        printf("The odd numbers from 1 to 1000 are %d:\n", num);
    }


}
