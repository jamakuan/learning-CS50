#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int points = get_int("How many points did you lose> ");

    if (points < 2)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > 2)
    {
        printf("You more points than me.\n");
    }
    else if (points == 2)
    {
        printf("You lost the same number of points as me.\n");
    }
}