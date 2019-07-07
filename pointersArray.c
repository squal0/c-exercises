#include <stdio.h>

void main()
{
    static int arry[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("\ni = %d, arry[i] = %d, *(arry + i) = %d ", i, arry[i], *(arry + i));
        printf("&arry[i] = %X, arry + i = %X", &arry[i], arry+i);
    }
}
