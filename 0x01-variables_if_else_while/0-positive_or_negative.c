#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints whether a randomly generated number is positive or negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int n;

    srand(time(0)); /* Seed rand */

    n = rand() - RAND_MAX / 2; /* Assign random number between -RAND_MAX/2 and RAND_MAX/2 */

    printf("The number is %d\n", n);

    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n == 0)
    {
        printf("is zero\n");
    }
    else
    {
        printf("is negative\n");
    }

    return (0);
}
