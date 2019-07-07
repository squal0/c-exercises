//program prompts and displays the marks of 5 students
#include <stdio.h>

int main()
{
    int score [5];
    //declare the variables to be used
    int n;
    //prompt the user for 5 scores
    n = 0; //initializing n to 0
    while(n < 5)
    {
        //test condition
        printf("Please enter the score for Student %d\n", n+1);
        scanf("%d", score[0]);
    }
    n++; //update the looping variable
    //display the score using the do while loop
    n = 0;
    do
    {
        printf("Score for Student %d is %d", n+1,score[n]);
        n++; //update the looping variable
    }
    while(n < 5); //test the condition
}
