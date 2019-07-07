//program that prints the ASCII code for a string
#include <stdio.h>
void main()
{
    char ary[5];
    int i;
    printf("\nEnter a string");
    scanf("%s",ary);
    printf("\nThe string is %s \n\n",ary);
    for(i = 0; i < 5; i++)
        printf("\t%d", ary[i]);
}
