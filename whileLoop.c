#include <stdio.h>

void main()
{
    int count  = 0;
    while(count < 100)
    {
        printf("This loop goes on forever\n");
        count +=10;
        printf("\t %d ", count);
        count -=10;
        printf("\t %d",count);
        printf("\n Ctrl-c will help");
    }
}
