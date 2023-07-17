#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the last digit of a randomly generated number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int n;
    int last_digit;

    srand(time(0)); /* Seed rand */
    n = rand() - RAND_MAX / 2; /* Assign random number between -RAND_MAX/2 and RAND_MAX/2 */

    last_digit = abs(n % 10); /* Get the absolute value of last digit */

    printf("Last digit of %d is %d ", n, -last_digit);

    if (last_digit > 5)
    {
        printf("and is greater than 5\n");
    }
    else if (last_digit == 0)
    {
        printf("and is 0\n");
    }
    else
    {
        printf("and is less than 6 and not 0\n");
    }

    return 0;
}
