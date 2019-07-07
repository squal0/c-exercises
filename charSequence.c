#include <stdio.h>

void main()
{
    int x;
    char i, ans;
    i = ' ';
    do
    {
        x = 0;
        ans = 'Y';
        printf("Enter a sequence of characters:");
        do
        {
            i = getchar();
            x++;
        }
        while(i != '\n');
            i = ' ';
        printf("\nNumber of characters entered is %d", --x);
        printf("\nMore sequences (Y/N)?");
        ans = getchar();
    }
    while(ans == 'Y' || ans == 'y');
}
