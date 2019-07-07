//program that displays numbers in reverse order
#include <stdio.h>
int main()
{
   int num;
   num = 20;
   printf("\n Count down");
   while(num >= 0)
   {
       printf("\n%d", num);
       num--;
   }
   return(0);
}
