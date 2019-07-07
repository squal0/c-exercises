//program displays the Floyd triangle
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the number of rows\n");
    scanf("%d", &a);
    for(b = 0; b <= a; b++)
    {
        for(c = 1; c <= b; c++)
            printf("*");
            printf("\n");
    }
    return(0);
}
