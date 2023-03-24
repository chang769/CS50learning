#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int score1=71;
    int score2=72;
    int score3=33;
    printf("Average: %f\n", (score1+score2+score3)/3.0);

    int scores[3];
    scores[0] = get_int("Score: ");
    scores[1] = get_int("Score: ");
    scores[2] = get_int("Score: ");
    printf("Average: %f\n", (scores[0]+scores[1]+scores[2])/3.0);

    int scores_loop[3];
    for (size_t i = 0; i < 3; i++)
    {
        /* code */
        scores_loop[i] = get_int("Score: ");
    }
    printf("Average: %f\n", (scores_loop[0]+scores_loop[1]+scores_loop[2])/3.0);

}