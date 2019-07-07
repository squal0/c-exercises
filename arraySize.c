//program that accepts values into an array of size 10 and displays the highest and average values
#include <stdio.h>
void main()
{
    int ary[10];
    int i,total,high;
    for(i = 0; i < 10; i++)
    {
        printf("\nEnter a value: %d:", i + 1);
        scanf("%d", &ary[i]);
    }
    high = ary[0];
    for(i = 1; i < 10; i++)
    {
        if(ary[i] > high)
            high = ary[i];
        printf("\n The highest value entered was %d", high);
    }
        for(i = 0, total = 0; i < 10; i++)
        {
          total = total + ary[i];
        printf("\n The average of the elements of ary is %d", total/i);
        }
}
