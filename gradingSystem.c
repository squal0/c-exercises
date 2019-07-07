/*program that accepts scores of 4 students in 3 subjects,
calculates their total,average and assigns them a grade*/
#include <stdio.h>
int main()
{
    char subjects [3][7] = {"Physics", "Chemistry", "Biology"};
    unsigned int score [4][3], total[4];
    int student[4],n,i;
    float average;
    char grade[4];

    for(n = 0; n < 4; n++)
    {
        total[n] = 0;
        for(i = 0; i < 3; i++)
        {
            printf("Enter the student %d's score in %c \n", n+1,subjects[n]);
            scanf("%u", &score[n][i]);
            total[n] += score[n][i];
        }
        average[n] = total[n]/3.0;
        if(average[n] >= 80)
        {
            grade[n] = 'A';
        }
        else if(average[n] >= 70)
        {
            grade[n] = 'B';
        }
        else if(average[n] >= 60)
        {
            grade[n] = 'C';
        }
        else if(average[n] >= 50)
        {
            grade[n] = 'D';
        }
        else
        {
            grade[n] = 'E';
        }
        printf("\nStudent's Results\n");
        printf("\tPhysics Chemistry Biology");
        printf("\tTotal Average Grade\n");

        for(n = 0; n < 4; n++)
        {
            printf("Student %d", n+1);
            for(i = 0; i < 3; i++)
            {
                printf("%6u", score[n][i]);
            }
            printf("%6u %6.2f %c\n", total[n], average[n],grade[n]);
        }
    }
}
