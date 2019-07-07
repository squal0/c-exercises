//program uses a function to print the numbers in the fibonacci series
#include <stdio.h>
int fibonacci(int);
int main()
{
    int n,first =0, second = 1, next, c;
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    printf("First %d terms of the fibonacci series are:\n",n, fibonacci(n));
    printf("%d\n", next);
    return(0);
}
int fibonacci(int a)
{
    int fir =0, sec=1,nex,b;
    for(b = 0; b < a; b++)
    {
        if (b <= 1)
        {
          nex = b;
        }
         else
         {
             nex = fir + sec;
            fir = sec;
            sec = nex;
            return sec;
         }
    }
}
