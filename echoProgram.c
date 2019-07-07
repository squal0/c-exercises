/*program echoes whatever the user has inputed*/
#include <stdio.h>

void main()
{
    char ch;
    while((ch = getchar())!= EOF)
    {
        putchar(ch);
    }
}
