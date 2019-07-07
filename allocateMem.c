//program creates an ID array dynamically and sorts the array in ascending order it uses pointers and the malloc() function to assign memory
#include <stdio.h>
#include <malloc.h>

void main()
{
    int *p, n,i,j,temp;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
    p = (int*) malloc(n* sizeof(int));
    for(i = 0; i < n; ++i)
    {
        printf("\n Enter element number %d: ", i+1);
        scanf("%d", p+i);
    }
    for(i = 0; i < n -1; ++i)
        for(j = i+1; j < n; ++j)
        if( *(p+i) > *(p+j))
    {
        temp = *(p+i);
        *(p+i) = *(p+j);
        *(p+j) = temp;
    }
    for(i = 0; i < n; ++i)
        printf("%d\n", *(p+i));
}
