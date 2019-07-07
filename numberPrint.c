//program that prints numbers from the user until the user enters 0which exits the program
#include <stdio.h>

int main()
{
    int cnt,cnt1;
    cnt = cnt1 = 0;
    do
    {
        printf("\n Enter a number:");
        scanf("%d", &cnt);
        printf("Number is %d", cnt);
        cnt1++;
    }
    while(cnt != 0);
    printf("\n The total numbers entered were %d:", --cnt1);
    return (0);
}
