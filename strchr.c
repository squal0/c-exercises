#include <stdio.h>
#include <string.h>

void main()
{
    char str1[15] = "OracionCorp";
    char str2[15] = "KingKunta";
    char chr = 'a', loc;
    if( loc != NULL)
        printf("%c occurs in %s\n",chr,str1);
    else
        printf("%c does not occur in %s\n", chr, str1);
    loc = strchr(str2,str1);
    if(loc != NULL)
        printf("%c occurs in %s \n",chr, str2);
     else
        printf("%c does not occur in %s\n", chr, str2);
}
