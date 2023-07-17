#include <stdio.h>
/**
 * main - entry point
 * Description: Prints the alphabet in lowercase, and then in uppercase,
 *              followed by a new line using putchar
 * Return: 0 (success)
 */

int main(void)
{
    char c;

    /* Print lowercase alphabet */
    for (c = 'a'; c <= 'z'; c++)
        putchar(c);

    /* Print uppercase alphabet */
    for (c = 'A'; c <= 'Z'; c++)
        putchar(c);

    /* Print newline character */
    putchar('\n');

    return (0);
}
